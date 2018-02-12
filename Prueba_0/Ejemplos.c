#include "configuracion.h"
#define PUERTO_N() GPIOPinWrite(GPIO_PORTN_BASE,GPIO_PIN_0|GPIO_PIN_1,Pin.PortN)
#define PUERTO_F() GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_0|GPIO_PIN_4,Pin.PortP)
void configuarcion(void);

struct Prender {
	uint8_t PortN;
	uint8_t PortP;
};
uint8_t i=0;//Esto es una prueba para variables globales que se ocupan en otros modulos
struct Prender Pin = { 1, 1 };
void secuencia(struct Prender* ptr);


int main(void) {
	configuracion();

	while (1) {
		secuencia(&Pin);
		PUERTO_N();
		PUERTO_F();
		SysCtlDelay(2000000);
	}
}

void secuencia(struct Prender* ptr) {

	if (ptr->PortN == 4) {
		ptr->PortN = 1;
		ptr->PortP = 1;
	} else {
		ptr->PortN = ptr->PortN * 2;
		ptr->PortP = ptr->PortP * 4;
	}
}
