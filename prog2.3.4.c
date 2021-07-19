/*---------------2.3.4Uma empresa não pretende contratar candidatos 
com mais de 40 anos. Faça um programa que receba a idade do candidato 
emostre uma mensagem se ele está apto ou não para a vaga.----------*/

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
	printf("Não apto para vaga!!");
}


getch();
}
