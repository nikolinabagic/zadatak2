#include"funkcije.h"

void unosTima(int m){
	char ime[30];
	if(m >= MAX - 1)
		printf("Tabela puna!");
	else{
		printf("Unesite ime kluba: ");
		scanf("%s", ime);
		tabela[m].rB = m + 1;
		strcpy(tabela[m].imeK, ime);
		tabela[m].bod = 0;
		tabela[m].BDG = 0;
		tabela[m].BPG = 0;
		tabela[m].brU = 0;
	}
}
