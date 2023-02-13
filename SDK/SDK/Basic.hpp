#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	//#pragma pack(push, 0x01)
#endif

namespace SDK
{

void InitGObjects();

template<typename Fn>
inline Fn GetVFunction(const void* Instance, std::size_t Index)
{
	auto Vtable = *reinterpret_cast<const void***>(const_cast<void*>(Instance));
	return reinterpret_cast<Fn>(Vtable[Index]);
}

class TUObjectArray
{
public:

	struct FUObjectItem
	{
		class UObject* Object;
		uint8 Pad[0x10];
	};

	FUObjectItem* Objects;
	int32 MaxElements;
	int32 NumElements;

	// Call InitGObjects() before using these functions

	inline int Num() const
	{
		return NumElements;
	}

	inline class UObject* GetByIndex(const int32 Index) const
	{
		if (Index < 0 || Index > NumElements)
			return nullptr;

		return Objects[Index].Object;
	}
};

class FString : public TArray<wchar_t>
{
public:
	inline FString() = default;

	using TArray::TArray;

	inline FString(const wchar_t* WChar)
	{
		MaxElements = NumElements = *WChar ? std::wcslen(WChar) + 1 : 0;

		if (NumElements)
		{
			Data = const_cast<wchar_t*>(WChar);
		}
	}

	inline FString operator=(const wchar_t*&& Other)
	{
		return FString(Other);
	}

	inline std::wstring ToWString()
	{
		if (IsValid())
		{
			return Data;
		}

		return L"";
	}

	inline std::string ToString()
	{
		if (IsValid())
		{
			std::wstring WData(Data);
			return std::string(WData.begin(), WData.end());
		}

		return "";
	}
};

class FName
{
public:
	int32 ComparisonIndex;
	int32 Number;

	
	inline std::string ToString() const
	{
		static FString TempString(1024);
		static auto AppendString = reinterpret_cast<void(*)(const FName*, FString&)>(uintptr_t(GetModuleHandle(0)) + Offsets::AppendString);

		AppendString(this, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		size_t pos = OutputString.rfind('/');

		if (pos == std::string::npos)
			return OutputString;

		return OutputString.substr(pos + 1);
	}

	inline bool operator==(const FName& Other)
	{
		return ComparisonIndex == Other.ComparisonIndex;
	}

	inline bool operator!=(const FName& Other)
	{
		return ComparisonIndex != Other.ComparisonIndex;
	}
};

template<typename ClassType>
class TSubclassOf
{
	class UClass* ClassPtr;

public:
	TSubclassOf() = default;

	inline TSubclassOf(UClass* Class)
		: ClassPtr(Class)
	{
	}

	inline UClass* Get()
	{
		return ClassPtr;
	}
	inline UClass* operator->()
	{
		return ClassPtr;
	}
	inline TSubclassOf& operator=(UClass* Class)
	{
		ClassPtr = Class;

		return *this;
	}

	inline bool operator==(const TSubclassOf& Other) const
	{
		return ClassPtr == Other.ClassPtr;
	}
	inline bool operator!=(const TSubclassOf& Other) const
	{
		return ClassPtr != Other.ClassPtr;
	}
	inline bool operator==(UClass* Other) const
	{
		return ClassPtr == Other;
	}
	inline bool operator!=(UClass* Other) const
	{
		return ClassPtr != Other;
	}
};

template<typename ValueType, typename KeyType>
class TPair
{
public:
	ValueType First;
	KeyType Second;
};

class FText
{
public:
	FString TextData;
	uint8 IdkTheRest[0x8];
};

#define NumBitsPerDWORD ((int32)32)
#define NumBitsPerDWORDLogTwo ((int32)5)

static FORCEINLINE uint32 CountLeadingZeros(uint32 Value)
{
    unsigned long Log2;
    if (_BitScanReverse(&Log2, Value) != 0)
    {
        return 31 - Log2;
    }

    return 32;
}

// Allocates Elements directly where the instance is created rather than on the heap
template <int32 NumElements>
class TInlineAllocator
{
    template <int32 Size, int32 Alignment>
    struct alignas(Alignment) TAlligendBytes
    {
        uint8 Pad[Size];
    };

    template <typename ElementType>
    struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
    {
    };

public:
    template <typename ElementType>
    class ForElementType
    {
        friend class TBitArray;

    public:
        TTypeCompatibleBytes<ElementType> InlineData[NumElements];

        ElementType* SecondaryData;

        FORCEINLINE int32 NumInlineBytes() const
        {
            return sizeof(ElementType) * NumElements;
        }
        FORCEINLINE int32 NumInlineBits() const
        {
            return NumInlineBytes() * 8;
        }

        FORCEINLINE ElementType& operator[](int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& operator[](int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }

        FORCEINLINE void operator=(void* InElements)
        {
            SecondaryData = InElements;
        }

        FORCEINLINE ElementType& GetInlineElement(int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& GetInlineElement(int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE ElementType& GetSecondaryElement(int32 Index)
        {
            return SecondaryData[Index];
        }
        FORCEINLINE const ElementType& GetSecondaryElement(int32 Index) const
        {
            return SecondaryData[Index];
        }
    };
};

class TBitArray
{
private:
    template <typename ArrayType>
    friend class TSparseArray;
    template <typename SetType>
    friend class TSet;

private:
    TInlineAllocator<4>::ForElementType<uint32> Data;
    int32 NumBits;
    int32 MaxBits;

    struct FRelativeBitReference
    {
    public:
        FORCEINLINE explicit FRelativeBitReference(int32 BitIndex)
            : DWORDIndex(BitIndex >> NumBitsPerDWORDLogTwo)
            , Mask(1 << (BitIndex & ((NumBitsPerDWORD)-1)))
        {
        }

        int32 DWORDIndex;
        uint32 Mask;
    };

public:
    struct FBitReference
    {
        FORCEINLINE FBitReference(uint32& InData, uint32 InMask)
            : Data(InData)
            , Mask(InMask)
        {
        }
        FORCEINLINE const FBitReference(const uint32& InData, const uint32 InMask)
            : Data(const_cast<uint32&>(InData))
            , Mask(InMask)
        {
        }

        FORCEINLINE void SetBit(const bool Value)
        {
            Value ? Data |= Mask : Data &= ~Mask;

            // 10011101 - Data			 // 10011101 - Data
            // 00000010 - Mask - true |	 // 00000010 - Mask - false
            // 10011111	-  |=			 // 11111101 -  ~
            //							 // 10011111 -  &=
        }

        FORCEINLINE operator bool() const
        {
            return (Data & Mask) != 0;
        }
        FORCEINLINE void operator=(const bool Value)
        {
            this->SetBit(Value);
        }

    private:
        uint32& Data;
        uint32 Mask;
    };

public:
    class FBitIterator : public FRelativeBitReference
    {
    private:
        int32 Index;
        const TBitArray& IteratedArray;

    public:
        FORCEINLINE const FBitIterator(const TBitArray& ToIterate, const int32 StartIndex) // Begin
            : IteratedArray(ToIterate)
            , Index(StartIndex)
            , FRelativeBitReference(StartIndex)
        {
        }
        FORCEINLINE const FBitIterator(const TBitArray& ToIterate) // End
            : IteratedArray(ToIterate)
            , Index(ToIterate.NumBits)
            , FRelativeBitReference(ToIterate.NumBits)
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return Index < IteratedArray.Num();
        }
        FORCEINLINE FBitIterator& operator++()
        {
            ++Index;
            this->Mask <<= 1;
            if (!this->Mask)
            {
                this->Mask = 1;
                ++this->DWORDIndex;
            }
            return *this;
        }
        FORCEINLINE bool operator*() const
        {
            // Thesis: Once there are more elements in the BitArray than InlineData can hold it'll just allocate all of
            // them through SecondaryElements, leaving InlineData all true

            if (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits())
            {
                return (bool)FBitReference(IteratedArray.Data.GetInlineElement(this->DWORDIndex), this->Mask);
            }
            else
            {
                return (bool)FBitReference(IteratedArray.Data.GetSecondaryElement(this->DWORDIndex), this->Mask);
            }
        }
        FORCEINLINE bool operator==(const FBitIterator& OtherIt) const
        {
            return Index == OtherIt.Index;
        }
        FORCEINLINE bool operator!=(const FBitIterator& OtherIt) const
        {
            return Index < /*=*/OtherIt.Index;
        }
        FORCEINLINE bool operator<(const int32 Other) const
        {
            return Index < Other;
        }
        FORCEINLINE bool operator>(const int32 Other) const
        {
            return Index < Other;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return Index;
        }
    };

    class FSetBitIterator : public FRelativeBitReference
    {
    private:
        const TBitArray& IteratedArray;

        uint32 UnvisitedBitMask;
        int32 CurrentBitIndex;
        int32 BaseBitIndex;

    public:
        FORCEINLINE FSetBitIterator(const TBitArray& ToIterate, int32 StartIndex)
            : FRelativeBitReference(StartIndex)
            , IteratedArray(const_cast<TBitArray&>(ToIterate))
            , UnvisitedBitMask((~0U) << (StartIndex & (NumBitsPerDWORD - 1)))
            , CurrentBitIndex(StartIndex)
            , BaseBitIndex(StartIndex & ~(NumBitsPerDWORD - 1))
        {
            if (StartIndex != IteratedArray.NumBits)
            {
                FindNextSetBit();
            }
        }
        FORCEINLINE FSetBitIterator(const TBitArray& ToIterate)
            : FRelativeBitReference(ToIterate.NumBits)
            , IteratedArray(const_cast<TBitArray&>(ToIterate))
            , UnvisitedBitMask(0)
            , CurrentBitIndex(ToIterate.NumBits)
            , BaseBitIndex(ToIterate.NumBits)
        {
        }

        FORCEINLINE FSetBitIterator& operator++()
        {
            UnvisitedBitMask &= ~this->Mask;

            FindNextSetBit();

            return *this;
        }
        FORCEINLINE bool operator*() const
        {
            return true;
        }

        FORCEINLINE bool operator==(const FSetBitIterator& Other) const
        {
            return CurrentBitIndex == Other.CurrentBitIndex;
        }
        FORCEINLINE bool operator!=(const FSetBitIterator& Other) const
        {
            return CurrentBitIndex < /*=*/Other.CurrentBitIndex;
        }

        FORCEINLINE explicit operator bool() const
        {
            return CurrentBitIndex < IteratedArray.NumBits;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return CurrentBitIndex;
        }

    private:
        void FindNextSetBit()
        {
            // InlineData is the first 16-bytes of TBitArray
            const uint32* ArrayData = (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits() ? (uint32*)(&IteratedArray) : IteratedArray.Data.SecondaryData);

            if (ArrayData)
            {
                const int32 ArrayNum = IteratedArray.NumBits;
                const int32 LastDWORDIndex = (ArrayNum - 1) / NumBitsPerDWORD;

                // std::cout << "ArrayNum: " << ArrayNum << " DWORDIndex: " << this->DWORDIndex << '\n';

                if (ArrayNum > this->DWORDIndex)
                {
                    uint32 RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;
                    while (!RemainingBitMask)
                    {
                        ++this->DWORDIndex;
                        BaseBitIndex += NumBitsPerDWORD;

                        if (this->DWORDIndex > LastDWORDIndex)
                        {
                            CurrentBitIndex += ArrayNum;
                            return;
                        }

                        RemainingBitMask = ArrayData[this->DWORDIndex];
                        UnvisitedBitMask = ~0;
                    }

                    const uint32 NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

                    this->Mask = NewRemainingBitMask ^ RemainingBitMask;

                    CurrentBitIndex = BaseBitIndex + NumBitsPerDWORD - 1 - CountLeadingZeros(this->Mask);

                    if (CurrentBitIndex > ArrayNum)
                    {
                        CurrentBitIndex = ArrayNum;
                    }
                }
            }
        }
    };

public:
    FORCEINLINE FBitIterator Iterator(int32 StartIndex)
    {
        return FBitIterator(*this, StartIndex);
    }
    FORCEINLINE FSetBitIterator SetBitIterator(int32 StartIndex)
    {
        return FSetBitIterator(*this, StartIndex);
    }

    FORCEINLINE FBitIterator begin()
    {
        return FBitIterator(*this, 0);
    }
    FORCEINLINE const FBitIterator begin() const
    {
        return FBitIterator(*this, 0);
    }
    FORCEINLINE FBitIterator end()
    {
        return FBitIterator(*this);
    }
    FORCEINLINE const FBitIterator end() const
    {
        return FBitIterator(*this);
    }

    FORCEINLINE FSetBitIterator SetBitsItBegin()
    {
        return FSetBitIterator(*this, 0);
    }
    FORCEINLINE const FSetBitIterator SetBitsItBegin() const
    {
        return FSetBitIterator(*this, 0);
    }
    FORCEINLINE const FSetBitIterator SetBitsItEnd()
    {
        return FSetBitIterator(*this);
    }
    FORCEINLINE const FSetBitIterator SetBitsItEnd() const
    {
        return FSetBitIterator(*this);
    }

    FORCEINLINE int32 Num() const
    {
        return NumBits;
    }
    FORCEINLINE int32 Max() const
    {
        return MaxBits;
    }
    FORCEINLINE bool IsSet(int32 Index) const
    {
        return *FBitIterator(*this, Index);
    }
    FORCEINLINE void Set(const int32 Index, const bool Value, bool bIsSettingAllZero = false)
    {
        const int32 DWORDIndex = (Index >> ((int32)5));
        const int32 Mask = (1 << (Index & (((int32)32) - 1)));

        if (!bIsSettingAllZero)
            NumBits = Index >= NumBits ? Index < MaxBits ? Index + 1 : NumBits : NumBits;

        FBitReference(Data[DWORDIndex], Mask).SetBit(Value);
    }
    FORCEINLINE void ZeroAll()
    {
        for (int i = 0; i < MaxBits; i++)
        {
            Set(i, false, true);
        }
    }
    FORCEINLINE void Reset()
    {
        ZeroAll();
        NumBits = 0;
    }
};

template <typename ElementType>
union TSparseArrayElementOrListLink
{
    TSparseArrayElementOrListLink(ElementType& InElement)
        : ElementData(InElement)
    {
    }
    TSparseArrayElementOrListLink(ElementType&& InElement)
        : ElementData(InElement)
    {
    }

    TSparseArrayElementOrListLink(int32 InPrevFree, int32 InNextFree)
        : PrevFreeIndex(InPrevFree)
        , NextFreeIndex(InNextFree)
    {
    }

    TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
    {
        return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
    }

    /** If the element is allocated, its value is stored here. */
    ElementType ElementData;

    struct
    {
        /** If the element isn't allocated, this is a link to the previous element in the array's free list. */
        int32 PrevFreeIndex;

        /** If the element isn't allocated, this is a link to the next element in the array's free list. */
        int32 NextFreeIndex;
    };
};

template <typename ArrayType>
class TSparseArray
{
private:
    template <typename SetType>
    friend class TSet;

public:
    typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

private:
    TArray<FSparseArrayElement>& Data;
    TBitArray AllocationFlags;
    int32 FirstFreeIndex;
    int32 NumFreeIndices;

public:
    class FBaseIterator
    {
    private:
        TSparseArray<ArrayType>& IteratedArray;
        TBitArray::FSetBitIterator BitArrayIt;

    public:
        FORCEINLINE FBaseIterator(const TSparseArray<ArrayType>& Array, const TBitArray::FSetBitIterator BitIterator)
            : IteratedArray(const_cast<TSparseArray<ArrayType>&>(Array))
            , BitArrayIt(const_cast<TBitArray::FSetBitIterator&>(BitIterator))
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return (bool)BitArrayIt;
        }
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator& operator++()
        {
            ++BitArrayIt;
            return *this;
        }
        FORCEINLINE ArrayType& operator*()
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE const ArrayType& operator*() const
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE ArrayType& operator->()
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE const ArrayType& operator->() const
        {
            return IteratedArray[BitArrayIt.GetIndex()].ElementData;
        }
        FORCEINLINE bool operator==(const TSparseArray<ArrayType>::FBaseIterator& Other) const
        {
            return BitArrayIt == Other.BitArrayIt;
        }
        FORCEINLINE bool operator!=(const TSparseArray<ArrayType>::FBaseIterator& Other) const
        {
            return BitArrayIt != Other.BitArrayIt;
        }

        FORCEINLINE int32 GetIndex() const
        {
            return BitArrayIt.GetIndex();
        }
        FORCEINLINE bool IsElementValid() const
        {
            return *BitArrayIt;
        }
    };

public:
    FORCEINLINE TSparseArray<ArrayType>::FBaseIterator begin()
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
    }
    FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator begin() const
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
    }
    FORCEINLINE TSparseArray<ArrayType>::FBaseIterator end()
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
    }
    FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator end() const
    {
        return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
    }

    FORCEINLINE FSparseArrayElement& operator[](uint32 Index)
    {
        return *(FSparseArrayElement*)&Data[Index].ElementData;
    }
    FORCEINLINE const FSparseArrayElement& operator[](uint32 Index) const
    {
        return *(const FSparseArrayElement*)&Data[Index].ElementData;
    }

    FORCEINLINE int32 Num() const
    {
        return ((Data.Num()) - NumFreeIndices);
    }
    FORCEINLINE int32 GetNumFreeIndices() const
    {
        return NumFreeIndices;
    }
    FORCEINLINE int32 GetFirstFreeIndex() const
    {
        return FirstFreeIndex;
    }
    FORCEINLINE const TArray<FSparseArrayElement>& GetData() const
    {
        return Data;
    }
    FORCEINLINE const TBitArray& GetAllocationFlags() const
    {
        return AllocationFlags;
    }
    FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
    {
        return AllocationFlags.IsSet(IndexToCheck);
    }

    FORCEINLINE bool RemoveAt(const int32 IndexToRemove)
    {
        if (IndexToRemove >= 0 && IndexToRemove < Data.Num() && AllocationFlags.IsSet(IndexToRemove))
        {
            int32 PreviousFreeIndex = -1;
            int32 NextFreeIndex = -1;

            if (NumFreeIndices == 0)
            {
                FirstFreeIndex = IndexToRemove;
                Data[IndexToRemove] = { -1, -1 };
            }
            else
            {
                for (auto It = AllocationFlags.begin(); It != AllocationFlags.end(); ++It)
                {
                    if (!It)
                    {
                        if (It.GetIndex() < IndexToRemove)
                        {
                            Data[IndexToRemove].PrevFreeIndex = It.GetIndex();
                        }
                        else if (It.GetIndex() > IndexToRemove)
                        {
                            Data[IndexToRemove].NextFreeIndex = It.GetIndex();
                            break;
                        }
                    }
                }
            }
            AllocationFlags.Set(IndexToRemove, false);
            NumFreeIndices++;

            return true;
        }
        return false;
    }
    FORCEINLINE int32 Add(ArrayType InElement)
    {
        FSparseArrayElement Element(InElement);

        int32 NextFree;
        int32 OutIndex;
        if (FirstFreeIndex >= 1)
        {
            NextFree = Data[FirstFreeIndex].NextFreeIndex;
            Data[FirstFreeIndex] = Element;
            --NumFreeIndices;

            AllocationFlags.Set(FirstFreeIndex, true);

            if (NumFreeIndices >= 1)
            {
                OutIndex = NextFree;
                FirstFreeIndex = NextFree;
                Data[NextFree].PrevFreeIndex = -1;

                return OutIndex;
            }
        }
        else
        {
            Data.Add(Element);
            AllocationFlags.Set(Data.Num() - 1, true);

            return Data.Num() - 1;
        }
    }

    FORCEINLINE void Reset()
    {
        Data.Reset();
        FirstFreeIndex = -1;
        NumFreeIndices = 0;
        AllocationFlags.Reset();
    }
};

template <typename ElementType>
class TSetElement
{
public:
    ElementType Value;
    mutable int32 HashNextId;
    mutable int32 HashIndex;

    TSetElement(ElementType InValue, int32 InHashNextId, int32 InHashIndex)
        : Value(InValue)
        , HashNextId(InHashNextId)
        , HashIndex(InHashIndex)
    {
    }

    FORCEINLINE TSetElement<ElementType>& operator=(const TSetElement<ElementType>& Other)
    {
        Value = Other.Value;
    }

    FORCEINLINE bool operator==(const TSetElement& Other) const
    {
        return Value == Other.Value;
    }
    FORCEINLINE bool operator!=(const TSetElement& Other) const
    {
        return Value != Other.Value;
    }
};

template <typename SetType>
class TSet {
private:
    unsigned char Data[0x50];
};

template <class ObjectType>
class TSharedPtr
{
public:
    ObjectType* Object;

    int32 SharedReferenceCount;
    int32 WeakReferenceCount;

    FORCEINLINE ObjectType* Get()
    {
        return Object;
    }
    FORCEINLINE ObjectType* Get() const
    {
        return Object;
    }
    FORCEINLINE ObjectType& operator*()
    {
        return *Object;
    }
    FORCEINLINE const ObjectType& operator*() const
    {
        return *Object;
    }
    FORCEINLINE ObjectType* operator->()
    {
        return Object;
    }

    FORCEINLINE bool operator==(const TSharedPtr<ObjectType>& Other)
    {
        return Object == Other.Object;
    }
};

template <typename SetType>
class TSet_
{
public:
    typedef TSetElement<SetType> ElementType;
    typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

    TSparseArray<ElementType> Elements;

    TInlineAllocator<1>::ForElementType<int> Hash;
    int32 HashSize;

public:
    class FBaseIterator
    {
    private:
        TSet<SetType>& IteratedSet;
        TSparseArray<ElementType>::FBaseIterator ElementIt;

    public:
        FORCEINLINE FBaseIterator(const TSet<SetType>& InSet, TSparseArray<TSetElement<SetType>>::FBaseIterator InElementIt)
            : IteratedSet(const_cast<TSet<SetType>&>(InSet))
            , ElementIt(InElementIt)
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return (bool)ElementIt;
        }
        FORCEINLINE TSet<SetType>::FBaseIterator& operator++()
        {
            ++ElementIt;
            return *this;
        }
        FORCEINLINE SetType& operator*()
        {
            return (*ElementIt).Value;
        }
        FORCEINLINE const SetType& operator*() const
        {
            return (*ElementIt).Value;
        }
        FORCEINLINE ElementType& operator->()
        {
            return *ElementIt;
        }
        FORCEINLINE const ElementType& operator->() const
        {
            return *ElementIt;
        }
        FORCEINLINE const int32 GetIndex() const
        {
            return ElementIt.GetIndex();
        }
        FORCEINLINE ElementType& GetSetElement()
        {
            return *ElementIt;
        }
        FORCEINLINE const ElementType& GetSetElement() const
        {
            return *ElementIt;
        }
        FORCEINLINE bool IsElementValid() const
        {
            return ElementIt.IsElementValid();
        }
    };

public:
    FORCEINLINE SetType& operator[](int Index)
    {
        return Elements[Index].ElementData.Value;
    }

    FORCEINLINE int32 Num() const
    {
        return Elements.Num();
    }
    FORCEINLINE bool IsValid() const
    {
        return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
    }
    FORCEINLINE TSparseArray<ElementType>& GetElements()
    {
        return Elements;
    }
    FORCEINLINE const TSparseArray<ElementType>& GetElements() const
    {
        return Elements;
    }
    FORCEINLINE const TBitArray& GetAllocationFlags() const
    {
        return Elements.GetAllocationFlags();
    }
    FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
    {
        return Elements.IsIndexValid(IndexToCheck);
    }
    FORCEINLINE const bool Contains(const SetType& ElementToLookFor) const
    {
        if (Num() <= 0)
            return false;

        for (SetType Element : *this)
        {
            if (Element == ElementToLookFor)
                return true;
        }
        return false;
    }
    FORCEINLINE const int32 Find(const SetType& ElementToLookFor) const
    {
        for (auto It = this->begin(); It != this->end(); ++It)
        {
            if (*It == ElementToLookFor)
            {
                return It.GetIndex();
            }
        }
        return -1;
    }
    FORCEINLINE bool Remove(const SetType& ElementToRemove)
    {
        return Elements.RemoveAt(Find(ElementToRemove));
    }
    FORCEINLINE int32 AddSingle(SetType InElement, int32 InHashIndex = 0, int32 InHashNextId = 0)
    {
        // ToDo: Check for duplication

        if (!this->IsValid())
            return this->Initialize();

        return Elements.AddSingle({ InElement, InHashIndex, InHashNextId });
    }
    FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
    {
        if (this->IsValid())
            return;

        Elements.Data.MaxElements = NumElementsToInitWith;
        Elements.Data.Count = NumElementsToInitWith;
        Elements.Data.Data = (ArrayElementType*)(FMemory_Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType)));
        for (int i = 0; i < NumElementsToInitWith; i++)
        {
            Elements.Data.Data[i].PrevFreeIndex = i - 1;
            Elements.Data.Data[i].NextFreeIndex = i + 1;
        }

        Elements.FirstFreeIndex = 0;
        Elements.NumFreeIndices = NumElementsToInitWith;

        Elements.AllocationFlags.MaxBits = 128;
        Elements.AllocationFlags.NumBits = NumElementsToInitWith;
        Elements.AllocationFlags.ZeroAll();

        Hash = FMemory_Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType));
        HashSize = NumElementsToInitWith * sizeof(ElementType);
    }

    FORCEINLINE void Reset()
    {
        Elements.Reset();
        Hash.InlineData->Pad[0] = 0;
        Hash.InlineData->Pad[1] = 0;
        Hash.InlineData->Pad[2] = 0;
        Hash.InlineData->Pad[3] = 0;
        Hash.SecondaryData = nullptr;
    }
};


template<typename KeyType, typename ValueType>
class TMap
{
	uint8 WaitTillIImplementIt[0x50];
};

class FWeakObjectPtr
{
protected:
	int32		ObjectIndex;
	int32		ObjectSerialNumber;

public:
	class UObject* Get() const;

	class UObject* operator->() const;

	bool operator==(const FWeakObjectPtr& Other) const;
	bool operator!=(const FWeakObjectPtr& Other) const;

	bool operator==(const class UObject* Other) const;
	bool operator!=(const class UObject* Other) const;
};

template<typename UEType>
class TWeakObjectPtr : FWeakObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}
};


struct FUniqueObjectGuid
{
	uint32 A;
	uint32 B;
	uint32 C;
	uint32 D;
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32 TagAtLastTest;
	TObjectID ObjectID;

	class UObject* Get() const
	{
		return WeakPtr.Get();
	}
	class UObject* operator->() const
	{
		return WeakPtr.Get();
	}
};

template<typename UEType>
class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid>
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

class FSoftObjectPath_
{
public:
	//FName AssetPathName;
	FString AssetPathName;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath_>
{
public:

	FString GetAssetPathName();
	//FString GetSubPathString();

	std::string GetAssetPathNameStr();
	//std::string GetSubPathStringStr();
};

template<typename UEType>
class TSoftObjectPtr : public FSoftObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

template<typename UEType>
class TSoftClassPtr : public FSoftObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};


enum class EClassCastFlags : uint64_t
{
	None = 0x0000000000000000,

	UField							= 0x0000000000000001,
	UInt8Property					= 0x0000000000000002,
	UEnum							= 0x0000000000000004,
	UStruct							= 0x0000000000000008,
	UScriptStruct					= 0x0000000000000010,
	UClass							= 0x0000000000000020,
	UByteProperty					= 0x0000000000000040,
	UIntProperty					= 0x0000000000000080,
	UFloatProperty					= 0x0000000000000100,
	UUInt64Property					= 0x0000000000000200,
	UClassProperty					= 0x0000000000000400,
	UUInt32Property					= 0x0000000000000800,
	UInterfaceProperty				= 0x0000000000001000,
	UNameProperty					= 0x0000000000002000,
	UStrProperty					= 0x0000000000004000,
	UProperty						= 0x0000000000008000,
	UObjectProperty					= 0x0000000000010000,
	UBoolProperty					= 0x0000000000020000,
	UUInt16Property					= 0x0000000000040000,
	UFunction						= 0x0000000000080000,
	UStructProperty					= 0x0000000000100000,
	UArrayProperty					= 0x0000000000200000,
	UInt64Property					= 0x0000000000400000,
	UDelegateProperty				= 0x0000000000800000,
	UNumericProperty				= 0x0000000001000000,
	UMulticastDelegateProperty		= 0x0000000002000000,
	UObjectPropertyBase				= 0x0000000004000000,
	UWeakObjectProperty				= 0x0000000008000000,
	ULazyObjectProperty				= 0x0000000010000000,
	USoftObjectProperty				= 0x0000000020000000,
	UTextProperty					= 0x0000000040000000,
	UInt16Property					= 0x0000000080000000,
	UDoubleProperty					= 0x0000000100000000,
	USoftClassProperty				= 0x0000000200000000,
	UPackage						= 0x0000000400000000,
	ULevel							= 0x0000000800000000,
	AActor							= 0x0000001000000000,
	APlayerController				= 0x0000002000000000,
	APawn							= 0x0000004000000000,
	USceneComponent					= 0x0000008000000000,
	UPrimitiveComponent				= 0x0000010000000000,
	USkinnedMeshComponent			= 0x0000020000000000,
	USkeletalMeshComponent			= 0x0000040000000000,
	UBlueprint						= 0x0000080000000000,
	UDelegateFunction				= 0x0000100000000000,
	UStaticMeshComponent			= 0x0000200000000000,
	UMapProperty					= 0x0000400000000000,
	USetProperty					= 0x0000800000000000,
	UEnumProperty					= 0x0001000000000000,
};

inline constexpr EClassCastFlags operator|(EClassCastFlags Left, EClassCastFlags Right)
{																																										
	return (EClassCastFlags)((std::underlying_type<EClassCastFlags>::type)(Left) | (std::underlying_type<EClassCastFlags>::type)(Right));
}																																										

inline bool operator&(EClassCastFlags Left, EClassCastFlags Right)
{																																										
	return (((std::underlying_type<EClassCastFlags>::type)(Left) & (std::underlying_type<EClassCastFlags>::type)(Right)) == (std::underlying_type<EClassCastFlags>::type)(Right));
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
