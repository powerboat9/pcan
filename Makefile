all: tokens.o token_taker.o

tokens.o: tokens.c tokens.h
	gcc -c -o tokens.o tokens.c

token_taker.o: token_taker.c token_taker.h token_taker_gen.c tokens.h
	gcc -c -o token_taker.o token_taker.c

token_taker_gen.c: token_taker_gen.py
	./token_taker_gen.py > token_taker_gen.c
