;convert 8-digit BCD to HEX
	AREA RESET,DATA,READONLY
	EXPORT __Vectors
	
__Vectors
	DCD 0x10001000
	DCD Reset_Handler
	
	ALIGN
	
	AREA mycode, CODE,READONLY
	ENTRY
	EXPORT Reset_Handler
	
Reset_Handler

	LDR r0, =NUM
	LDR r0, [r0]
	LDR r10, =RES
	
	MOV r1, #0x1; A^
	MOV r2, #0x0; result
	MOV r3, #0xA; A
	
BACK
	AND r4, r0, #0xF
	MUL r4, r1
	ADD r2, r4
	MUL r1, r3
	LSR r0, #0x4
	TEQ r0, #0x0
	BNE BACK
	
	STR r2, [r10]
	
STOP B STOP

END

NUM DCD 0x12345678
	
	AREA DATASEG,DATA,READWRITE
	
RES DCD 0

	END
