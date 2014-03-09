/*
* Configuration of module: Dcm
*
* Created by:   parai          
* Copyright:    (C)parai@foxmail.com  
*
* Configured for (MCU):    MinGW ...
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by easySAR Studio (https://github.com/parai/OpenSAR)
*/

#ifndef DCM_CFG_H_
#define DCM_CFG_H_

#define DCM_VERSION_INFO_API              STD_ON
#if defined(USE_DET)
#define DCM_DEV_ERROR_DETECT STD_ON
#else
#define DCM_DEV_ERROR_DETECT STD_OFF
#endif

#define DCM_RESPOND_ALL_REQUEST           STD_ON  // Activate/Deactivate response on SID 0x40-0x7f and 0xc0-0xff.
#define DCM_REQUEST_INDICATION_ENABLED    STD_ON  // Activate/Deactivate indication request mechanism.
#define DCM_PAGEDBUFFER_ENABLED           STD_OFF    // Enable/disable page buffer mechanism (currently only disabled supported)

#define DCM_DSL_BUFFER_LIST_LENGTH            4
#define DCM_DSL_TX_PDU_ID_LIST_LENGTH         2
#define DCM_DSL_RX_PDU_ID_LIST_LENGTH         2

#define DCM_MAIN_FUNCTION_PERIOD_TIME_MS    10

// default Size configuration
#define DCM_LIMITNUMBER_PERIODDATA        5  //MaxNumberofSimultaneousPeriodictransmissions
#define DCM_MAX_DDDSOURCE_NUMBER          4  //MaxSourcesforOneDynamicIdentifier
#define DCM_MAX_DDD_NUMBER                2 
 // default Period configuration
#define DCM_PERIODICTRANSMIT_SLOW            50  
#define DCM_PERIODICTRANSMIT_MEDIUM          30
#define DCM_PERIODICTRANSMIT_FAST            15

// index
#define DCM_DIAG_P2P_REQ        0
#define DCM_DIAG_P2A_REQ        1

#define DCM_DIAG_P2P_ACK        0
#define DCM_DIAG_P2A_ACK        1



//do add/subtract by hand.please
//#define USE_DEM
#define DCM_USE_SERVICE_DIAGNOSTICSESSIONCONTROL
#define DCM_USE_SERVICE_ECURESET
#define DCM_USE_SERVICE_COMMUNICATIONCONTROL
//#define DCM_USE_SERVICE_CLEARDIAGNOSTICINFORMATION
//#define DCM_USE_SERVICE_READDTCINFORMATION
#define DCM_USE_SERVICE_READDATABYIDENTIFIER
//#define DCM_USE_SERVICE_READMEMORYBYADDRESS
//#define DCM_USE_SERVICE_WRITEMEMORYBYADDRESS
//#define DCM_USE_SERVICE_READSCALINGDATABYIDENTIFIER
#define DCM_USE_SERVICE_SECURITYACCESS
#define DCM_USE_SERVICE_WRITEDATABYIDENTIFIER
#define DCM_USE_SERVICE_ROUTINECONTROL
#define DCM_USE_SERVICE_TESTERPRESENT
//#define DCM_USE_SERVICE_CONTROLDTCSETTING
#define DCM_USE_SERVICE_READDATABYPERIODICIDENTIFIER
#define DCM_USE_SERVICE_DYNAMICALLYDEFINEDATAIDENTIFIER
#define DCM_USE_SERVICE_INPUTOUTPUTCONTROLBYIDENTIFIER
#define DCM_USE_SERVICE_UPLOAD_DOWNLOAD

#define fGetSeed(Name)                 fGetSeed##Name
#define fCompareKey(Name)              fCompareKey##Name


#define fDidGetDataLength(Name)        fDidGetDataLength##Name
#define fDidConditionReadCheck(Name)   fDidConditionReadCheck##Name
#define fDidReadData(Name)             fDidReadData##Name
#define fDidConditionCheckWrite(Name)  fDidConditionCheckWrite##Name
#define fDidWriteData(Name)            fDidWriteData##Name

#define fDidFreezeCurrentState(Name)   fDidFreezeCurrentState##Name
#define fDidResetToDefault(Name)       fDidResetToDefault##Name
#define fDidReturnControlToEcu(Name)   fDidReturnControlToEcu##Name
#define fDidShortTermAdjustment(Name)  fDidShortTermAdjustment##Name

#define fStartRoutine(Name)            fStartRoutine##Name
#define fStopRoutine(Name)             fStopRoutine##Name
#define fRequestResultRoutine(Name)    fRequestResultRoutine##Name

extern Std_ReturnType fGetSeedDS(uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fCompareKeyDS(uint8 *key);
extern Std_ReturnType fGetSeedPRGS(uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fCompareKeyPRGS(uint8 *key);
extern Std_ReturnType fGetSeedEXTDS(uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fCompareKeyEXTDS(uint8 *key);
extern Std_ReturnType fGetSeedSSDS(uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fCompareKeySSDS(uint8 *key);

extern Std_ReturnType fDidGetDataLengthSWVersion(uint16 *didLength);
extern Std_ReturnType fDidConditionReadCheckSWVersion(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidReadDataSWVersion(uint8 *data);
extern Std_ReturnType fDidConditionCheckWriteSWVersion(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidWriteDataSWVersion(uint8 *data, uint16 dataLength, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidGetDataLengthNvMVersion(uint16 *didLength);
extern Std_ReturnType fDidConditionReadCheckNvMVersion(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidReadDataNvMVersion(uint8 *data);
extern Std_ReturnType fDidConditionCheckWriteNvMVersion(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidWriteDataNvMVersion(uint8 *data, uint16 dataLength, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidGetDataLengthFingerPrint(uint16 *didLength);
extern Std_ReturnType fDidConditionReadCheckFingerPrint(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidReadDataFingerPrint(uint8 *data);
extern Std_ReturnType fDidConditionCheckWriteFingerPrint(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidWriteDataFingerPrint(uint8 *data, uint16 dataLength, Dcm_NegativeResponseCodeType *errorCode);

#define fDidFreezeCurrentStateLedControl NULL
#define fDidResetToDefaultLedControl NULL
extern Std_ReturnType fDidReturnControlToEcuLedControl(uint8 *controlOptionRecord, uint8 *controlEnableMaskRecord, uint8 *controlStatusRecord, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidShortTermAdjustmentLedControl(uint8 *controlOptionRecord, uint8 *controlEnableMaskRecord, uint8 *controlStatusRecord, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidFreezeCurrentStateSpeedControl(uint8 *controlOptionRecord, uint8 *controlEnableMaskRecord, uint8 *controlStatusRecord, Dcm_NegativeResponseCodeType *errorCode);
#define fDidResetToDefaultSpeedControl NULL
extern Std_ReturnType fDidReturnControlToEcuSpeedControl(uint8 *controlOptionRecord, uint8 *controlEnableMaskRecord, uint8 *controlStatusRecord, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fDidShortTermAdjustmentSpeedControl(uint8 *controlOptionRecord, uint8 *controlEnableMaskRecord, uint8 *controlStatusRecord, Dcm_NegativeResponseCodeType *errorCode);

extern Std_ReturnType fStartRoutineErase(uint8 *inBuffer, uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fStopRoutineErase(uint8 *inBuffer, uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fRequestResultRoutineErase(uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fStartRoutineCheckIntegrity(uint8 *inBuffer, uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fStopRoutineCheckIntegrity(uint8 *inBuffer, uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType fRequestResultRoutineCheckIntegrity(uint8 *outBuffer, Dcm_NegativeResponseCodeType *errorCode);


extern Std_ReturnType Diag_GetSesChgPer(Dcm_SesCtrlType sesCtrlTypeActive,Dcm_SesCtrlType sesCtrlTypeNew);

extern Std_ReturnType Diag_RequestServiceStart (Dcm_ProtocolType protocolID);
extern Std_ReturnType Diag_RequestServiceStop (Dcm_ProtocolType protocolID);
extern Std_ReturnType Diag_RequestServiceIndication(uint8 *requestData, uint16 dataSize);

#endif /*DCM_CFG_H_*/
