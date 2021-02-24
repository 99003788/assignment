PROJECT_NAME = ASSIGNMENT_99003788

Src = test.c\
src/factorial.c\
src/isprime.c\
src/isPalindrome.c\
src/vsum.c\
src/set.c\
src/reset.c\
src/flip.c\
src/query.c\
src/mystrlen.c\
src/mystrcpy.c\
src/mystrcmp.c\
src/mystrcat.c\


build:
	gcc -Iinclude $(Src)-o d1.out 
	gcc -Iinclude $(Src)-o output.out 
	gcc -Iinclude $(Src)-o s1.out
