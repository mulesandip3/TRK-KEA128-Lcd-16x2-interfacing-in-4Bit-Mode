/*
 * LCD4BIT.h
 *
 *  Created on: Sep 24, 2013
 *      Author: SM
 */

#ifndef LCD4BIT_H_
#define LCD4BIT_H_
/*******************************************************************************
* Includes
*******************************************************************************/
#include "derivative.h"

/*******************************************************************************
* Constants
********************************************************************************/


/*******************************************************************************
* Macros
********************************************************************************/

                
/*******************************************************************************
* Types
********************************************************************************/


/*******************************************************************************
* Variables
********************************************************************************/


/*******************************************************************************
* Global Variables
********************************************************************************/


/*******************************************************************************
* Global Functions
********************************************************************************/

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void Delay(unsigned long b);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void write_command(int cmd);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void write_data(int dat);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void lcd_data(char dat);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void lcd_command(char cmd);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void printlcd(char *CPtr);

/***********************************************************************************************
*
* @brief    Delay fuction
* @param    none
* @return   none
*
************************************************************************************************/  
void init_lcd(void);



#endif /* LCD4BIT_H_ */