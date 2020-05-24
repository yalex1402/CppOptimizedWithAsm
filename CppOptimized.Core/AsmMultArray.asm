
TITLE AsmMultArray Procedure	(AsmMultArray.asm)

.586
.model flat,C

AsmMultArray PROTO,
	multVal:DWORD, arrayPtr:PTR DWORD, count:DWORD

.code
AsmMultArray PROC USES edi,
	multVal:DWORD, arrayPtr:PTR DWORD, count:DWORD

	mov eax,multVal 
	mov ecx,count 
	mov edi,arrayPtr 
	L1:
		mov eax,[edi]
		mul ebx
		mov [edi],eax
		add edi,4
	loop L1
	ret
AsmMultArray ENDP
END