/*----------1.7.11Para calcular a área de um retângulo, podemos multiplicar sua largura pelo seu comprimento. 
Permita que o usuário entre com a largura e comprimento de um retângulo qualquer e mostre sua área.---------*/
#include<stdio.h>
#include<conio.h>

int main (){
	float larg, comp, area;
	
	printf("Digite a largura: ");
	scanf ("%f", &larg);
	printf("Digite o comprimento: ");
	scanf("%f", &comp);
	
	area=larg*comp;
	
	printf("Area = %.2f", area);
	
	getch();
}
