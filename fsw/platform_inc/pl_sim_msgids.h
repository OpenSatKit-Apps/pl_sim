/*
** Purpose: Define message IDs for the Payload Simulator app
**
** Notes:
**   None
**
** License:
**   Written by David McComas, licensed under the copyleft GNU General
**   Public License (GPL).
**
** References:
**   1. OpenSatKit Object-based Application Developer's Guide.
**   2. cFS Application Developer's Guide.
**
*/

#ifndef _pl_sim_msgids_
#define _pl_sim_msgids_

/*
** Command Message IDs
*/

#define  PL_SIM_CMD_MID        0x1F30
#define  PL_SIM_SEND_HK_MID    0x1F31


/*
** Telemetry Message IDs
*/

#define  PL_SIM_TLM_HK_MID     0x0F30  /* Housekeeping */

#endif /* _pl_sim_msgids_ */
