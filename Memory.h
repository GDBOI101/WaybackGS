#pragma once
namespace Offsets {
	int TickFlush = 0x22F03B0;
	int NotifyControlMessage = 0x2559A80;
	int PauseBeaconReqeusts = 0x70FB10;
	int SetChannelActor = 0x2171BC0;
	int CreateChannel = 0x22D6C70;
	int CloseChannel = 0x2157410;
	int ReplicateActor = 0x216D360;
	int SetWorld = 0x22EED70;
	int SendClientAdjustment = 0x23E1660;
	int NoReservation = 0x71ABE0;
	int ValidationFailure = 0x70FDD0;
	int CallPreReplication = 0x1F67370;
	int KickPlayer = 0x21DCE80;
	int CreateNetDriver = 0x2503800;
	int SpawnPlayActor = 0x228AEA0;
	int NCM = 0x2559A80;

	int IsNetRelevantFor = 0x85; //VTable Index
	int ReplicationFrame = 0x288; //int*
	int NetworkObjectList = 0x3F8; //FNetworkObjectList*
	int InitListen = 0x49; //VTable Index
	int GetNetConnection = 0x8C; //VTable Index

	int GiveAbility = 0x3EA92D0;
	int InternalTryActivateAbility = 0x3EAA5B0;
}