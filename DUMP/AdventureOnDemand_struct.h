// Enum AdventureOnDemand.EArrivalTunnelWorkerState
enum class EArrivalTunnelWorkerState : uint8_t {
	Initialise,
	SetupAndRetrieveInitialDestinationLocation,
	RetryingRequestEventFromScheduler,
	WaitingForEventHandleStatusChanged,
	WaitingForEQSLocationRequest,
	ServeDestinationLocationToTunnel,
	StartExitFlow,
	EArrivalTunnelWorkerState_MAX,
};

// ScriptStruct AdventureOnDemand.AdventureOnDemandServiceCrewEntry
// Size: 0x40 (Inherited: 0x00)
struct FAdventureOnDemandServiceCrewEntry {
	char UnknownData_0[0x38]; // 0x00(0x38)
	struct UTunnelDesc* TunnelDesc; // 0x38(0x08)
};

