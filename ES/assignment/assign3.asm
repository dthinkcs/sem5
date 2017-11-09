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
	LDR R0, [R0]
	MOV R4, #00
	MOV R1, #00
	mov R9, #00
BACK 	
	MUL R1, R4, R4 ; square
	ADDS R2, R2, R1 ; add to prev sum 
	ADD R4, #01 	; inc R1
	MOV R1, #00
	TEQ R4, R0
	BNE BACK
	MOV R4, R2 ; ans in r4

UP
	AND R6, R4, #0X0000000F
	ADD R6, R6, R9
	MOV R9, #00
	CMP R6, #09
	BLS SKIP 
	
	ADD R6, #06
	MOV R9, #01
	AND R6, #0X0000000F
SKIP
	ADD R11, R11, R6
	LSR R4, #04
	
	TEQ R4, #00
	BNE UP 
	STR R11, [R3],#04
	STR R9, [R3]
	
STOP B STOP
num1 DCD 0X06
	AREA mycode, DATA, READWRITE
res DCD 0
	END