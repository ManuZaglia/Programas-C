/*---------------------------------------------------------
4.2.4 (a) Fa�a um programa que carregue um vetor de inteiros, 
permitindo que o usu�rio defina a quantidade de elementos a 
serem carregados. O usu�rio tamb�m deve digitar o valor de um 
elemento o qual deseja saber quantos destes elementos existem 
no vetor.
-------------------------------------------------------------*/
#include<stdio.h>
#define TAMVET 10

int main (){
	int c, qtdelem=0;
	int val[TAMVET], elem, TotElem;
	
	printf("Quantos elementos tem para digitar?");
	scanf("%i", &TotElem);
	
	for (c=0;c<TotElem;c++){
		scanf("%i", &val[c]);
	}
	
	printf("Digite o elemento a ser procurado: ");
	scanf("%i", &elem);
	
	//busca no vetor
	
	for (c=0;c<TotElem;c++){
		if (val[c] == elem) {
			qtdelem++;
		}
	}
	
	printf("Existem %i elementos %i no vetor", qtdelem, elem);
	getch();
	
}

