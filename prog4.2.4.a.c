/*---------------------------------------------------------
4.2.4 (a) Faça um programa que carregue um vetor de 10 inteiros.
O usuário também deve digitar o valor de um  elemento o qual 
deseja saber se existe ou não no vetor.
-------------------------------------------------------------*/
#include<stdio.h>
#define TAMVET 10

int main (){
	int c, qtdelem=0, val[TAMVET], elem;
	
	for(c=0;c<TAMVET;c++){
		scanf("%i", &val[c]);
	}
	printf("Digite o e3lemneto a ser procurado: ");
	scanf("%i", elem);
	
	for (c=0;c>TAMVET;c++){
		if (val[c]==elem){
			qtdelem++;
			}
	}
	
	if (qtdelem==0){
		printf("Elemento NAO existente");
    }
    else{
    	printf("Elemento existente");
	}
	getch();
}
