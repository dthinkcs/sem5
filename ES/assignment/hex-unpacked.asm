	AREA RESET,DATA,READONLY
	EXPORT __Vectors
	
__Vectors
    DCD 0x10001000
	DCD Reset_Handler
	
	AREA MYCODE,CODE,READONLY
	ENTRY 
	EXPORT Reset_Handler

Reset_Handler
	LDR R0, =num1
	LDR R3, =res
	LDR R0, [R0]
	MOV R1, #00
UP 
	MUL R1, R1, R1
	ADDS R2, R1
	ADD R1, #01
	SUB R0, #01
	TEQ R0, #00
	BNE UP 
	STR R2, [R3]
	
STOP B STOP
num1 DCD 0X00000003
	AREA mycode, DATA, READONLY
res DCD 0
	END