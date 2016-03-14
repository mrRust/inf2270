.globl _incr
incr:
	movl	4(%esp),%eax #Flytt parameter 4 til eax
	incl	%eax			#Ok eax med 1
	ret