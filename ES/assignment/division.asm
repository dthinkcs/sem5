	AREA RESET, DATA, READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	
	AREA mycode, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler
	
Reset_Handler
	LDR R0, =num1 ;divident
	LDR R1, =num2 ;divisor
	MOV R3, #00   ;quotient
	
	LDR R0, [R0]
	LDR R1, [R1]
	CMP R0, R1
	BLO EXIT
UP
	SUB R0, R1
	ADD R3, #01
	CMP R0, R1
	BLO EXIT
	B UP 
EXIT
	MOV R4, R3
	MOV R5, R0

STOP B STOP
num1 DCD 0X10
num2 DCD 0X2
	AREA mycode, DATA, READONLY
	END