/*******************************************************************************
* File Name: Pot1.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pot1_ALIASES_H) /* Pins Pot1_ALIASES_H */
#define CY_PINS_Pot1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Pot1_0			(Pot1__0__PC)
#define Pot1_0_INTR	((uint16)((uint16)0x0001u << Pot1__0__SHIFT))

#define Pot1_INTR_ALL	 ((uint16)(Pot1_0_INTR))

#endif /* End Pins Pot1_ALIASES_H */


/* [] END OF FILE */
