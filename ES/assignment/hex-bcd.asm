	AREA RESET,DATA,READONLY
	EXPORT __Vectors
	
__Vectors
    DCD 0x10001000
	DCD Reset_Handler
	
	AREA MYCODE,CODE,READONLY
	ENTRY 
	EXPORT Reset_Handler

Reset_Handler
	
	ldr r8, =0x200
	xpsr r8
STOP B STOP
num1 DCD 
	AREA mycode, DATA, READONLY
res DCD 0
	END