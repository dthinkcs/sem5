;subtract two 8-digit BCD numbers
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

	

	LDR r0, =NUM1
	LDR r0, [r0]
	LDR r1, =NUM2
	LDR r1, [r1]
	
	MOV r4, #0x0
	MOV r5, #0x0
	MOV r6, #0x0
	
BACK
	AND r2, r0, #0xF
	AND r3, r1, #0xF
	
	SUB r2, r4
	
	CMP r2, r3
	BLO SKIP1
	
	SUB r2, r3
	MOV r4, #0x0
	B SKIP2
	
SKIP1
	SUB r2, r3
	ADD r2, #0xA
	MOV r4, #0x1

	
SKIP2
	ORR r5, r2
	ROR r5, #0x4
	ROR r0, #0x4
	ROR r1, #0x4
	ADD r6, #0x1
	CMP r6, #0x8
	BNE BACK
	
	
	LDR r10, =RES
	STR r5, [r10], #0x4
	STR r4, [r10]
	
	
STOP B STOP

END

NUM1 DCD 0x34562898
NUM2 DCD 0x12345678
	
	AREA DATASEG,DATA,READWRITE

RES DCD 0
	
	END

