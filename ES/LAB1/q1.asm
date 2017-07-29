	AREA RESET, DATA, READONLY
	EXPORT __Vectors

__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	
	AREA mycode, CODE, READONLY 
	ENTRY
	EXPORT Reset_Handler

Reset_Handler
	LDR R0, =1234
	LDR R1, =0X1234
	END