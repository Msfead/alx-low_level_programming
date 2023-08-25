section		.text
	extrn	printf
	global	main

main:
	mov		edi, msg
	mov		eax, 0
	call	printf


section		.data
	msg db  'Hello,	Hellberton',	0xa,	0
