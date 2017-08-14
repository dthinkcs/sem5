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
	LDR R1, =num2
	LDR R2, =res
	
	LDR R4, [R0]
	LDR R3, [R1]
	
	SUBS R6, R4, R3
	STR R6, [R2],#04
	SBC R7, #00
	STR R7, [R2]
	
STOP B STOP
num1 DCD 0X11111111
num2 DCD 0X22222222

	AREA mydata, DATA, READWRITE
res DCD 0, 0, 0, 0
	END
	