#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 11 //poslednje mesto koristimo za sortiranje kao pomoc prilikom zamene vrednosti

struct klub{
	int rB;
	char imeK[30];
	int bod;
	int BDG;
	int BPG;
	int brU;
}tabela[MAX];

void unosTima(int m);
void pretrazivanje();
void ispis(int m);
void unosRezultata(int m);
void upisPodataka();
