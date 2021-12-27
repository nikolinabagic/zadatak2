all: zadatak2

zadatak2: zadatak2.o unosTima.o pretrazivanje.o ispis.o unosRezultata.o upisPodataka.o
	gcc -o zadatak2 zadatak2.o unosTima.o pretrazivanje.o ispis.o unosRezultata.o upisPodataka.o
zadatak2.o: funkcije.h zadatak2.c
	gcc -c zadatak2.c
unosTima.o: funkcije.h unosTima.c
	gcc -c unosTima.c
pretrazivanje.o: funkcije.h pretrazivanje.c
	gcc -c pretrazivanje.c
ispis.o: funkcije.h ispis.c
	gcc -c ispis.c
unosRezultata.o: funkcije.h unosRezultata.c
	gcc -c unosRezultata.c
upisPodataka.o: funkcije.h upisPodataka.c
	gcc -c upisPodataka.c
