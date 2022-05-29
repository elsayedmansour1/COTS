/*
 * main.c
 *
 *  Created on: Oct 13, 2020
 *      Author: elsay
 */
#include "../LIB/LBIT_MATH.h"
#include "../LIB/LSTD_TYPES.h"

#include "../MCAL/MDIO/MDIO_Interface.h"

#include "avr/delay.h"

#include "../HAL/HLCD/HLCD_Interface.h"
int main(void)
{

	/*LCD INITIALIZATION*/
	HLCD_VidInit();
	HLCD_DisplayString("NO PROBLEM");
	//HLCD_VidWriteData('A');
	_delay_ms(1000);
	//HLCD_VoidClearDisplay();
	while(1)
	{

	}
	return 0;
}
