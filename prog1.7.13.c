/*----------1.7.11Para calcular a �rea de um ret�ngulo, podemos multiplicar sua largura pelo seu comprimento. 
Permita que o usu�rio entre com a largura e comprimento de um ret�ngulo qualquer e mostre sua �rea.---------*/
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
