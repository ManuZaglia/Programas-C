/*-----------------------------------------------------
6.1.1 Faça um programa que carregue em uma matriz as notas
dos 30 alunos das 3 turmas que um professor leciona. Mostre a
media de cada turma.
--------------------------------------------------------*/
#include<stdio.h>

int main (){
	int t, a;
	float notas[3][3], soma, media;
	
	for (t=0;t<3;t++){
		for (a=0;a<3;a++){
			scanf("%f", &notas[t][a]);
		}
	}
	
	for (t=0;t<3;t++){
		soma=0;
		for (a=0;a<3;a++){
			soma=soma+notas[t][a];
		}
		media=soma/3;
		printf("\nA media da turma %i é %.1f", t+1,media);
	}
	getch();
	
	
	
}
