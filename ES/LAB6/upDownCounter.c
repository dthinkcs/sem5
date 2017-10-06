



#include <LPC17xx.h>



unsigned int j;

int i;

unsigned long LED = 0x00000010;

long x;

int main(void){

	SystemInit();

	

	SystemCoreClockUpdate();

	

	LPC_PINCON->PINSEL0 = 0x00000000;

	LPC_GPIO0->FIODIR = 0xFF<<4;

	LPC_PINCON->PINSEL4 = 0x00<<24;

	LPC_GPIO2->FIODIR = 0x00;

	while(1){

		x = LPC_GPIO2->FIOPIN1;

		x = x&0x10;

		LPC_GPIO0->FIOPIN = i<<4;

		if(x!=0x10)

			i+=0x01;

		else

			i-=0x01;

		if(i==256)

			i=0;

		if(i==-1)

			i=255;

		for(j=0;j<100000000;j++);

	}



}

