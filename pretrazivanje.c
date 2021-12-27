#include"funkcije.h"

void pretrazivanje(){
	char p[5], *token;
	int b;
	printf("Unesite (x,</>) x (granica bodova) i (< ili >): ");
	scanf("%s", p);
	
	token = strtok(p, ",");
	b = atoi(token);
	token = strtok(NULL, ",");
	
	//if(strcmp(token, '>') == 0)
		
	//else
}
