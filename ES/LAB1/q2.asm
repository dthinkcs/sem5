	AREA RESET, DATA, READONLY
	EXPORT __Vectors

__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	
	AREA mycode, CODE, READONLY 
	ENTRY
	EXPORT Reset_Handler

Reset_Handler
	LDR R0, =src
	LDR R1, =dst
	LDR R3, [R0]
	STR R3, [R1]
xyz B xyz
src DCD 1234
	AREA mydata, DATA, READWRITE
dst DCD 0


	END