/*-------------------------------------------------------------
3.3.3Fa�a um programa que permita que o usu�rio digite a idade 
de 10 funcion�rios.
--------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	int cont=1, idade;
	
	printf("Digite a idade dos funcion�rios:\n");
	while(cont <= 10){  
	
	printf("\n Idade: ");
	scanf("%i", &idade);
	cont++;
    }
	
	
	getch();
}
