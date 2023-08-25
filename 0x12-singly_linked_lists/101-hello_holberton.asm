	global	main
		extern	printf

main:
	mov		edi,	format
	mov		eax, eax
	call	printf
	movv	eax,0


format:	db  'Hello,	Hellberton\n',0
