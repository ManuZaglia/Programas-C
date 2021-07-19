/*--------------------------------------------------------
2.3.13 Faça um programa que, leia os 3 números, a partir do
usuário, correspondentes aos coeficientes de uma equação do 2o
grau. Através de Bascara, calcule, se possível, as raízes da
equação, realizando todas as consistências necessárias. Faça o
algoritmo e o fluxograma antes do programa
----------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
	printf("Digite o valor de c: \n");
	scanf("%f", &c);
	

	//ax2+bx+c = 0
	//delta = b2-4*a*c (se for =0, temos 1 raiz real, se for >0 temos 2 raizes reais e se for <0 não temos nenhuma)
	//x1 e x2 = -b+- sqrt(delta)/2*a
	
	if(delta != 0){
		delta = (b*b) - 4*a*c;
		if(delta == 0){
			x1 = (-b + sqrt(delta)) / 2*a;
			printf("Delta Igual a 0\n");
			printf("x1 e x2 Igual a %.2f", x1);
	    } else{
	    	if(delta > 0){
	    		x1 = (-b + sqrt(delta)) / 2*a;
	    		x2 = (-b - sqrt(delta)) / 2*a;
			    printf("Delta Maior que 0\n");
			    printf("x1 Igual a %.2f", x1);
			    printf("x2 Igual a %.2f", x2);
			} else{
				printf("Delta Menor que 0\n");
				printf("Nao existe raiz real!");
			 }
		} 
 	} 
	
	getch();
}
