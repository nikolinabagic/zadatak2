#include"funkcije.h"

void ispis(int m){
	printf("R.Br.      Ime kluba   OU      G       B");
	for(int i = 0; i < m; i++){
		printf("\n%4d.", tabela[i].rB);
		printf("%15s", tabela[i].imeK);
		printf("%5d", tabela[i].brU);
		printf("%6d:", tabela[i].BDG);
		printf("%2d", tabela[i].BPG);
		printf("%6d", tabela[i].bod);
	}
}
