/*-----------------------------------------------------------------
2.3.7 O IMC (�ndice de Massa Corp�rea) � um bom sinalizador para 
o controle do nosso peso. A f�rmula � simples:IMC = peso / (altura2)
atrav�s   da   tabela   abaixo   podemos   saber   se   precisamos
emagrecer, engordar ou manter o nosso peso. Fa�a um programa que 
receba a altura e o peso do usu�rio. Deacordo com a f�rmula do IMC, 
mostre a situa��o do usu�rio.
---------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	float peso, altura, imc;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	imc=peso/(altura*altura);
	
	if(imc<20){
		printf("Abaixo do peso");
	}
	if(imc>=20 && imc<=24.9){
		printf("Peso normal");
	}
    if(imc>=25 && imc<=35){
    	printf("Acima do peso normal");
	}
	if(imc>35){
		printf("Obeso");
	}

		
	getch();
	}
