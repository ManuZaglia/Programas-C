/*---------------2.3.4Uma empresa n�o pretende contratar candidatos 
com mais de 40 anos. Fa�a um programa que receba a idade do candidato 
emostre uma mensagem se ele est� apto ou n�o para a vaga.----------*/

#include<stdio.h>
#include<conio.h>
int main (){
	int idade;

printf("Digite sua idade: ");
scanf("%i", &idade);

if(idade<=40){
	printf ("Apto para vaga!!");
}
else{
	printf("N�o apto para vaga!!");
}


getch();
}
