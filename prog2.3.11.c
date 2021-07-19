/*----------------------------------------------------------------
2.3.11 Dados 3 valores quaisquer, verifique se eles podem ser
lados de um triângulo. Lembre que, em um triângulo, a soma de
dois lados deve ser maior que o maior lado.
---------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int lado1, lado2, lado3;
    
	printf("Digite 3 valores referente aos lados de um triangulo em ordem decrescente: ");
	scanf("%f %f %f", &lado1, &lado2, &lado3);
	
		
	if(lado2 + lado3 > lado1){
		printf("Eh um triangulo");
	}
	else{
		printf("Nao eh um triangulo");
	}
	
	
	
	getch();
}
