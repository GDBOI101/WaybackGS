#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x238 - 0x230)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bConsumePointerInput;                              // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BB6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUserWidget");
		return Clss;
	}

	void SetConsumePointerInput(bool bInConsumePointerInput);
};

// 0x668 (0x8A0 - 0x238)
// Class CommonUI.CommonButton
class UCommonButton : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnSelectedChanged;                                 // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonClicked;                                   // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonDoubleClicked;                             // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonHovered;                                   // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonUnhovered;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x288(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x28C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyAlphaOnDisable;                              // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x2A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x2B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelectable;                                       // 0x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldSelectUponReceivingFocus;                   // 0x2D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractableWhenSelected;                         // 0x2D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleable;                                       // 0x2D3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayInputActionWhenNotInteractable;            // 0x2D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BB9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	int32                                        InputPriority;                                     // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputActionWithKeyboard;                      // 0x2EC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BBA[0x43];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          NormalStyle;                                       // 0x340(0x2A8)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          SelectedStyle;                                     // 0x5E8(0x2A8)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BBB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButton");
		return Clss;
	}

	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam);
	void OnUnhovered();
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnSelected();
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnHovered();
	void OnEnabled();
	void OnDoubleClicked();
	void OnDisabled();
	void OnDeselected();
	void OnCurrentTextStyleChanged();
	void OnClicked();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	bool IsHovered();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonDoubleClicked();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void EnableButton();
	void DisableButtonWithReason(class FText& DisabledReason);
	void DisableButton();
	void ClearSelection();
};

// 0x1A8 (0x3E0 - 0x238)
// Class CommonUI.CommonActivatablePanel
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_1BC2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnWidgetActivated;                                 // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWidgetDeactivated;                               // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC3[0x100];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConsumeAllActions;                                // 0x360(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExposeActionsExternally;                          // 0x361(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldBypassStack;                                // 0x362(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC4[0x7D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatablePanel");
		return Clss;
	}

	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void OnBeginOutro();
	void OnBeginIntro();
	void OnActivated();
	bool IsIntroed();
	bool IsActivated();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent);
};

// 0x200 (0x318 - 0x118)
// Class CommonUI.CommonListView
class UCommonListView : public UWidget
{
public:
	UMulticastDelegateProperty_                  OnItemClicked;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemDoubleClicked;                               // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemHovered;                                     // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSelected;                                    // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemWidgetCreated;                               // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemWidgetDestroyed;                             // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        ItemHeight;                                        // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               DesiredItemPadding;                                // 0x17C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               ListItemClass;                                     // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESelectionMode                    SelectionMode;                                     // 0x198(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0x199(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearSelectionOnClick;                            // 0x19A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BCE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPreAllocatedEntries;                            // 0x19C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSimulateDoubleClickOnSelectedItemClick;           // 0x1A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BCF[0x16F];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListViewNullItem*               NullItem;                                          // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListView");
		return Clss;
	}

	void SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick);
	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	bool SetSelectedItem(class UObject* Item, bool bWaitIfPendingRefresh);
	bool SetSelectedIndex(int32 Index);
	void SetItemSelection(class UObject* Item, bool bSelected);
	void SetItemHeight(float NewHeight);
	void SetDesiredItemPadding(struct FMargin& DesiredPadding);
	void SetDataProvider(TArray<class UObject*>& InDataProvider);
	void ScrollIntoView(class UObject* Item, bool NavigateOnScrollIntoView);
	bool IsRefreshPending();
	bool IsItemVisible(class UObject* Item);
	enum class ESelectionMode GetSelectionModeBP();
	bool GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* GetSelectedItem();
	int32 GetNumItemsSelected();
	int32 GetNumItems();
	class UObject* GetItemAt(int32 Index);
	int32 GetIndexForItem(class UObject* Item);
	void DynamicHandleItemUnhoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemHoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemDoubleClickedCommonButton(class UCommonButton* Button);
	void DynamicHandleItemClickedUserWidget(class UUserWidget* Widget);
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
	void ClearSelection();
	void Clear();
	void CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// 0x18 (0x330 - 0x318)
// Class CommonUI.CommonTileView
class UCommonTileView : public UCommonListView
{
public:
	enum class EItemAlignment                    ItemAlignment;                                     // 0x318(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ItemWidth;                                         // 0x31C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTileView");
		return Clss;
	}

	void SetItemWidth(float NewWidth);
};

// 0xC8 (0x300 - 0x238)
// Class CommonUI.CommonTabListWidget
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTabSelected;                                     // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTabButtonCreated;                                // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTabButtonRemoved;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextTabInputActionData;                            // 0x268(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousTabInputActionData;                        // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x288(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetSwitcher*                 LinkedSwitcher;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x298(0x50)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BD9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTabListWidget");
		return Clss;
	}

	void SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(class FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButton> ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(class FName TabId);
	void OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int32 ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	int32 GetTabCount();
	class UCommonButton* GetTabButtonByID(class FName TabNameID);
	class UCommonWidgetSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName TabNameID, class FText& Reason);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetGroupBase");
		return Clss;
	}

	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};

// 0x70 (0x98 - 0x28)
// Class CommonUI.CommonButtonGroup
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	UMulticastDelegateProperty_                  OnSelectedButtonChanged;                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHoveredButtonChanged;                            // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonClicked;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonDoubleClicked;                             // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionCleared;                                // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bSelectionRequired;                                // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BDD[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonGroup");
		return Clss;
	}

	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int32 ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	class UCommonButton* GetButtonAtIndex(int32 Index);
	int32 FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};

// 0x50 (0x298 - 0x248)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDE[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextBlock");
		return Clss;
	}

	void SetWrapTextWidth(int32 InWrapTextAt);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void SetScrollStyle(TSubclassOf<class UCommonTextScrollStyle> InScrollStyle);
	void SetProperties(TSubclassOf<class UCommonTextStyle> InStyle, TSubclassOf<class UCommonTextScrollStyle> InScrollStyle);
	void ResetScrollState();
};

// 0x88 (0x320 - 0x298)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_1BE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnOutroEvent;                                      // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInterpolationEndedEvent;                         // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x2C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonNumberFormattingOptions        FormattingSpecification;                           // 0x2C8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x2DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x2E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x2E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE2[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonNumericTextBlock");
		return Clss;
	}

	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};

// 0x40 (0x240 - 0x200)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	UMulticastDelegateProperty_                  OnLoadingStateChanged;                             // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE5[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLoadGuard*                      LoadGuard;                                         // 0x238(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyImage");
		return Clss;
	}

	void ShowDefaultImage();
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	bool IsLoading();
	void ForwardLoadingStateChanged(bool bIsLoading);
};

// 0x10 (0x420 - 0x410)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	UMulticastDelegateProperty_                  OnAnalogCapture;                                   // 0x410(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnalogSlider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class UCommonActionHandlerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionHandlerInterface");
		return Clss;
	}

};

// 0x228 (0x340 - 0x118)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressMaterialBrush;                             // 0x138(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconRimBrush;                                      // 0x1D0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BE6[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionWidget");
		return Clss;
	}

	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x90 (0xB8 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                           Background;                                        // 0x28(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorderStyle");
		return Clss;
	}

	void GetBackgroundBrush(struct FSlateBrush* Brush);
};

// 0x20 (0x2B0 - 0x290)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               MinimumPadding;                                    // 0x29C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorder");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

// 0x10 (0x2C0 - 0x2B0)
// Class CommonUI.CommonVisibilityWidget
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                         bShowForGamepad;                                   // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x2B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x2B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPC;                                        // 0x2B3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMac;                                       // 0x2B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS4;                                       // 0x2B5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXBox;                                      // 0x2B6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForIOS;                                       // 0x2B7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForAndroid;                                   // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x2B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x2BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE9[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilityWidget");
		return Clss;
	}

};

// 0x508 (0x530 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SingleMaterialBrush;                               // 0x30(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBase;                                        // 0xC0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalHovered;                                     // 0x150(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalPressed;                                     // 0x1E0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBase;                                      // 0x270(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedHovered;                                   // 0x300(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedPressed;                                   // 0x390(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x420(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x4B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomPadding;                                     // 0x4C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x4D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x4D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x4D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x4F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x500(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x518(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonStyle");
		return Clss;
	}

	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};

// 0x88 (0x4F0 - 0x468)
// Class CommonUI.CommonButtonInternal
class UCommonButtonInternal : public UButton
{
public:
	UMulticastDelegateProperty_                  OnDoubleClicked;                                   // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEB[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinWidth;                                          // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x4C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BEC[0x26];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonInternal");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	UDelegateProperty_                           OnNavigationEvent;                                 // 0x290(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonCustomNavigation");
		return Clss;
	}

	bool OnCustomNavigationEvent__DelegateSignature(enum class EUINavigation NavigationType);
};

// 0x48 (0x70 - 0x28)
// Class CommonUI.CommonGlobalInputHandler
class UCommonGlobalInputHandler : public UObject
{
public:
	uint8                                        Pad_1BED[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGlobalInputHandler");
		return Clss;
	}

};

// 0x298 (0x2C0 - 0x28)
// Class CommonUI.CommonInputManager
class UCommonInputManager : public UObject
{
public:
	uint8                                        Pad_1BF3[0x238];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CurrentlyHeldActionInputHandler;                   // 0x260(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCommonActivatablePanel*>       ActivatablePanelStack;                             // 0x270(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonGlobalInputHandler*             GlobalInputHandler;                                // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BF4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOperation>                    Operations;                                        // 0x298(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BF5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputManager");
		return Clss;
	}

	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent);
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	int32 GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};

// 0x88 (0x1B8 - 0x130)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	UMulticastDelegateProperty_                  OnLoadingStateChanged;                             // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ThrobberPadding;                                   // 0x144(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x158(0x18)(Edit, NativeAccessSpecifierPrivate)
	struct FStringClassReference                 TextStyleClass;                                    // 0x170(0x10)(Config, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LoadingText;                                  // 0x188(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BF8[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLoadGuard");
		return Clss;
	}

	void SetLoadingText(class FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, UDelegateProperty_& OnAssetLoaded);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonListViewNullItem
class UCommonListViewNullItem : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListViewNullItem");
		return Clss;
	}

};

// 0x28 (0x340 - 0x318)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UCommonListView
{
public:
	UDelegateProperty_                           OnGetChildrenForCategory;                          // 0x318(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAllowInvisibleItemSelection;                      // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BFA[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTreeView");
		return Clss;
	}

	void SetSelection(class UObject* InItem);
	void SetItemExpansion(class UObject* Item, bool InShouldExpandItem);
	void RequestRefresh();
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPoolableWidgetInterface");
		return Clss;
	}

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonListItem
class UCommonListItem : public UCommonPoolableWidgetInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListItem");
		return Clss;
	}

	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	int32 GetIndentLevel();
	int32 DoesItemHaveChildren();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonObjectListItem
class UCommonObjectListItem : public UCommonListItem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonObjectListItem");
		return Clss;
	}

	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Reset();
	class UObject* GetData();
};

// 0xA8 (0xD0 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x28(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset;                                      // 0xA4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0xAC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0xBC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextStyle");
		return Clss;
	}

	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextScrollStyle");
		return Clss;
	}

};

// 0x20 (0x2B8 - 0x298)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_1BFE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonDateTimeTextBlock");
		return Clss;
	}

	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown);
	struct FDateTime GetDateTime();
};

// 0xB8 (0xE0 - 0x28)
// Class CommonUI.CommonUIContext
class UCommonUIContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C00[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInputSuspensionChanged;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C01[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputManager*                   CommonInputManager;                                // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUsingGamepad;                                   // 0xD8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUsingTouch;                                     // 0xD9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  GamepadInputType;                                  // 0xDA(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C02[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIContext");
		return Clss;
	}

	void SetGamepadInputType(enum class ECommonInputType InGamepadInputType);
	bool IsUsingTouch();
	bool IsUsingPointerInput();
	bool IsUsingGamepad();
	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType);
	enum class ECommonInputType GetCurrentInputType();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUILibrary");
		return Clss;
	}

	class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

// 0x68 (0x90 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	struct FStringClassReference                 DefaultTextStyle_StringRef;                        // 0x28(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DefaultTextStyle;                                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringClassReference                 DefaultButtonStyle_StringRef;                      // 0x40(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButtonStyle>        DefaultButtonStyle;                                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringClassReference                 DefaultBorderStyle_StringRef;                      // 0x58(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonBorderStyle>        DefaultBorderStyle;                                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyDisplayConfiguration> InputKeyToPlatformSpecificDisplayDataMap;          // 0x70(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultClickAction;                                // 0x80(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISettings");
		return Clss;
	}

};

// 0x90 (0x930 - 0x8A0)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButton
{
public:
	uint8                                        Pad_1C03[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRotated;                                         // 0x8E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonBorder*                         MainBorder;                                        // 0x8F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         ButtonLeft;                                        // 0x8F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         ButtonRight;                                       // 0x900(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MyText;                                            // 0x908(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C04[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRotator");
		return Clss;
	}

	void ShiftTextRight(class UCommonButton* Button);
	void ShiftTextLeft(class UCommonButton* Button);
	void SetSelectedItem(int32 InValue);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
};

// 0x30 (0x268 - 0x238)
// Class CommonUI.CommonInputReflector
class UCommonInputReflector : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButton>             ButtonType;                                        // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCommonButton*>                 ActiveButtons;                                     // 0x240(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCommonButton*>                 InactiveButtons;                                   // 0x250(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C05[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputReflector");
		return Clss;
	}

	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data);
	void ClearButtons();
};

// 0x50 (0x198 - 0x148)
// Class CommonUI.CommonWidgetSwitcher
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	UMulticastDelegateProperty_                  OnActiveWidgetDeactivated;                         // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActiveWidgetChanged;                             // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x169(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C08[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C09[0x22];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bWidgetActivationEnabled;                          // 0x192(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOutroPanelBelow;                                  // 0x193(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C0A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetSwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	bool HasWidgets();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};

// 0x8E0 (0xA10 - 0x130)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCurrentPageIndexChanged;                         // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FWidgetCarouselNavigationBarStyle     NavigationStyle;                                   // 0x148(0x890)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C0D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarousel");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};

// 0x0 (0x198 - 0x198)
// Class CommonUI.CommonWidgetStack
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetStack");
		return Clss;
	}

	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWigdet();
	void DeactivateWidget();
	void ActivateWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
