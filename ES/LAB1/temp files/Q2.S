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
	LDR R1,=src+(len-1)*4
	LDR R2,=src+(2*len-1-lap)*4
	
LP LDR R4,[R1],#-4
	STR R4,[R2],#-4
	SUB R0,#01
	TEQ R0,#0
	BNE LP
STOP B STOP
len EQU 10
lap EQU 3
	AREA overlap,DATA,READWRITE
src dcd 0,0,0,0,0,0,0,0,0,0
	END
	