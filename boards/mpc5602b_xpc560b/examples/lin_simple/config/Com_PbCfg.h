/*
* Configuration of module: Com (Com_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5602B
*
* Module vendor:           ArcCore
* Generator version:       2.1.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

//  COM Polite Defines.
#define COM_PDU_ID_LAMPS_RX		0
#define COM_PDU_ID_TCM_RX		1
#define COM_PDU_ID_ENG_TX		2



// PDU group definitions
#define ComPduGroup_Tx_0 0
#define ComPduGroup_Rx_0 1


// Signal definitions
#define Signal_Tx_1 0
#define Signal_Tx_2 1
#define Signal_Tx_3 2
#define Signal_Rx_1 3
#define Signal_Rx_2 4
#define word_1 5
#define word_2 6



// Notifications



// Callouts


#endif /* COM_PBCFG_H */