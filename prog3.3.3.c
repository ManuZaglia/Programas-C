/*-------------------------------------------------------------
3.3.3Faça um programa que permita que o usuário digite a idade 
de 10 funcionários.
--------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	int cont=1, idade;
	
	printf("Digite a idade dos funcionários:\n");
	while(cont <= 10){  
	
	printf("\n Idade: ");
	scanf("%i", &idade);
	cont++;
    }
	
	
	getch();
}
