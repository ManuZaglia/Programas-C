/*------------2.3.3Permita que o usuário digite um valor inteiro, teste se este valor é maior que 10, caso seja, 
imprima “Maior que 10”; caso contrário, imprima “Menor ou igual a 10”----------------------------------------*/

#include<stdio.h>
#include<conio.h>
int main (){
	int num;
	
	printf("Digite um  numero inteiro: ");
	scanf("%i", num);
	
	if (num>10){
		printf("Maior que 10");
	}
	else{
		printf("Menor que 10");
	}    

		
	getch();
}
