/*------------------------------------------------------------
4.2.2Faça um programa que receba as notas de 10 alunos de uma
classe em um vetor e mostre a média das notas.
------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main (){
	float nota[10], soma, media;
	int i;
	
	for (i=0;i<10;i++){
		printf("Entre com a %ia nota\n", i+1);
		scanf("%f", &nota[i]);
		soma=soma+nota[i];
	}
	media=soma/i;
	
	printf("A media eh: %.1f", media);
	getch();
}
