;multiply two bcd numbers using repetitive addition
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

	LDR r8, =NUM1
	LDR r8, [r8]
		
	LDR r9, =NUM2
	LDR r9, [r9]
	
	MOV r4, #0x0
	
BACK1
	MOV r0, r4
	MOV r1, r8
	
	BL ADD_BCD
	
	SUB r9, #0x1
	TEQ r9, #0x0
	BNE BACK1
	
	LDR r0, =RES
	STR r4, [r0], #0x4
	STR r6, [r0]
	
STOP B STOP

ADD_BCD
	MOV r10, #0x8
	MOV r4, #0x0
	MOV r5, #0x0
BACK
	AND r2, r0, #0xF
	AND r3, r1, #0xF
	ADD r7, r2, r3
	ADD r7, r5
	MOV r5, #0x0
	CMP r7, #0xA
	BLO SKIP
	SUB r7, #0xA
	MOV r5, #0x1
SKIP
	ADD r4, r7
	ROR r4, #0x4
	ROR r0, #0x4
	ROR r1, #0x4
	SUB r10, #0x1
	TEQ r10, #0x0
	BNE BACK
	ADD r6, r5
	
	BX LR

NUM1 DCD 0x82345678
NUM2 DCD 0x9
	
	AREA DATASEG, DATA, READWRITE
	
RES DCD 0,0

	END