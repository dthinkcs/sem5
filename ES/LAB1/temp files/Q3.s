	AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	
	AREA mycode,CODE,READONLY
	ENTRY
	EXPORT Reset_Handler
	
Reset_Handler
	MOV R0,#0X5
	LDR R1,=src
	LDR R2,=src+(len-1)*4
	
LP LDR R4,[R1]
	LDR R5,[R2]
	STR R5,[R1],#4
	STR R4,[R2],#-4
	SUB R0,#01
	TEQ R0,#0
	BNE LP
STOP B STOP
len EQU 10
	AREA reverse,DATA,READWRITE
src DCD 0,0,0,0,0,0,0,0,0,0
	END