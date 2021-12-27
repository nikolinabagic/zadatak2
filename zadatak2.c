#include"funkcije.h"

void sortiranje(int m){
	int p;
	for(int i = 0; i < m; i++){
		for(int j = i + 1; j < m; j++){
			if(tabela[i].bod < tabela[j].bod){
				tabela[MAX] = tabela[i];
				tabela[i] = tabela[j];
				tabela[j] = tabela[MAX];
			}
			if(tabela[i].rB > tabela[j].rB){
				p = tabela[i].rB;
				tabela[i].rB = tabela[j].rB;
				tabela[j].rB = p;
			}
		}
	}
}

int main(){
	FILE *file;
	int izbor, m = 0;
	
	if(file = fopen("tabelaKlubova.txt", "w")){
		printf("Fajl postoji.\n");
		while(1){
			printf("\n\nEvidencija fudbalskih klubova");
			printf("\n1. Unos novog tima");
			printf("\n2. Pretrazivanje tabele (x parametar)");
			printf("\n3. Ispis tabele");
			printf("\n4. Unos rezultata");
			printf("\n0. Izlaz");
			printf("\nUnesite vas izbor: ");
			
			scanf("%d", &izbor);
			switch(izbor){
				case 1:
					printf("\n1. Unos novog tima\n");
					unosTima(m);
					m++;
					break;
				case 2:
					printf("\n2. Pretrazivanje tabele (x parametar)\n");
					pretrazivanje();
					break;
				case 3:
					printf("\n3. Ispis tabele\n");
					ispis(m);
					break;
				case 4:
					printf("\n4. Unos rezultata\n");
					if(m < 2){
						printf("Nema dovoljan broj timova!\n");
						break;
					}
					unosRezultata(m);
					sortiranje(m);
					break;
				case 0:
					for(int i = 0; i < m; i++)
						fwrite(&tabela[i], sizeof(struct klub), m, file);
					fclose(file);
					printf("\nUspesno spremanje podataka u fajl!\nKraj programa :D\n");
					exit(1);
					break;
				default:
					printf("Pogresan izbor, pokusaj ponovo!\n");
					break;
			}
		}
	}
	else
		printf("Fajl ne postoji.\n");
	return 0;
}
