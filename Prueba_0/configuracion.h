/*
 * configuracion.h
 *
 *  Created on: 22/03/2016
 *      Author: sanch_000
 */

#ifndef CONFIGURACION_H_
#define CONFIGURACION_H_

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
extern uint8_t i;
void configuracion(void){
	SysCtlClockFreqSet(
				(SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL
						| SYSCTL_CFG_VCO_480), 120000000);
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_0 | GPIO_PIN_1);
		GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_0 | GPIO_PIN_4);
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		GPIOPinWrite(GPIO_PORTN_BASE, GPIO_PIN_0 | GPIO_PIN_1, 0x00);
		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_0 | GPIO_PIN_4, 0x00);
		i++;
}

#endif /* CONFIGURACION_H_ */
