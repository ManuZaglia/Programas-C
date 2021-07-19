/*------------------------------------------------------------------------------
Faça um programa que receba 3 valores correspondentes aos lados de um triângulo. 
Verifique e dê mensagens para asseguintes condições, sendo A o maior lado:
Se A >= B + C Nenhum triangulo é formado 
Se A2 = B2 + C2 Um triangulo retangulo é formado
Se A2 > B2 + C2 Um triangulo obtusangulo é formado
Se A2 < B2 + C2 Um triangulo acutangulo é formado
Faça o algoritmo e o fluxograma antes do programa.
--------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main(){
	
	float a, b, c, a2, b2, c2;
	
	printf("Digite um lado do triangulo: ");
    scanf("%f", &a);
    printf("Digite mais um lado do triangulo: ");
    scanf("%f", &b); 
    printf("Digite o ultimo lado do triangulo: ");
    scanf("%f", &c);
    
    a2=a*a;
    b2=b*b;
	c2=c*c;    
        
    if(a >= b + c){ //Se A >= B + C Nenhum triangulo é formado 
    	printf("Nenhum triangulo eh formado!");
	}
	if(a2 == b2 + c2){ //Se A2 = B2 + C2 Um triangulo retangulo é formado
        printf("Um triangulo retangulo eh formado!");
	}
  	if(a2 > b2 + c2){ //Se A2 > B2 + C2 Um triangulo obtusangulo é formado
        printf("Um triangulo obtusangulo eh formado!");
    }
    if(a2 < b2 + c2){ //Se A2 < B2 + C2 Um triangulo acutangulo é formado
	    printf("Um triangulo acutangulo eh formado!");
    }
	
	
getch();
}
