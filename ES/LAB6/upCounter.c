#include <LPC17xx.h>



unsigned int j;

unsigned int i;

unsigned long LED = 0x00000010;



int main(void){

	SystemInit();

	

	SystemCoreClockUpdate();

	

	

	LPC_PINCON->PINSEL0 = 0x00000000;

	LPC_GPIO0->FIODIR = 0xFF<<4;

	while(1){

		LPC_GPIO0->FIOPIN = i<<4;

		i++;

		if(i==256)

			i=0;

		for(j=0;j<1000000;j++);

	}

}