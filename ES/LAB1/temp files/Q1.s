	AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	
	AREA mycode,CODE,READONLY
	ENTRY
	EXPORT Reset_Handler

Reset_Handler
	MOV R0,#0X0A
	LDR R1,=src
	LDR R2,=src+len*4
	
LP LDR R4,[R1],#4
	STR R4,[R2],#4
	SUB R0,#01
	TEQ R0,#0
	BNE LP
STOP B STOP
len equ 10
	AREA nonoverlap,DATA,READWRITE
src dcd 0,0,0,0,0,0,0,0,0,0
	END