#include"funkcije.h"

int pomocni(int m, char *t){
	char ime[30];
	
	while(1){
		printf("%s", t);
		scanf("%s", ime);
		for(int i = 0; i < m; i++){
			if(strcmp(ime, tabela[i].imeK) == 0)
				return i;
		}
		printf("Tim ne postoji u tabeli! Pritisnite bilo sta za prikaz tabele i ponovite.\n");
		scanf("%s", ime);
		ispis(m);
	}
}

void unosRezultata(int m){
	char p[5], *token;
	int p1, p2, g1, g2;
	
	p1 = pomocni(m, "\nUnesite domaci tim: ");
	p2 = pomocni(m, "\nUnesite gostujuci tim: ");
	
	printf("\nUnestie rezultat utakmice: ");
	scanf("%s", p);
	
	token = strtok(p, ":");
	g1 = atoi(token);
	token = strtok(NULL, ":");
	g2 = atoi(token);
	
	tabela[p1].brU += 1;
	tabela[p2].brU += 1;
	tabela[p1].BDG += g1;
	tabela[p1].BPG += g2;
	tabela[p2].BDG += g2;
	tabela[p2].BPG += g1;
	
	if(g1 > g2)
		tabela[p1].bod += 3;
	else if(g2 > g1)
		tabela[p2].bod += 3;
	else{
		tabela[p1].bod += 1;
		tabela[p2].bod += 1;
	}
}
