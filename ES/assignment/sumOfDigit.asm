	AREA RESET, DATA, READONLY 
	EXPORT __Vectors
__Vectors
	DCD 0X10001000
	DCD Reset_Handler 
	
	AREA mycode, CODE, READONLY 
	ENTRY
	EXPORT Reset_Handler
	
Reset_Handler 
	LDR R0, =num1
	LDR R3, =res
	MOV R8, #08
	LDR R4, [R0] 
UP	
	AND R5, R4, #0X0000000F
	ADDS R6, R5
	LSR R4, R4, #04
	SUB R8, #01
	TEQ R8, #00
	BNE UP
	STR R6, [R3],#04
STOP B STOP 
num1 DCD 0X01234567
	AREA mydata, DATA, READWRITE
res DCD 0 
	END 