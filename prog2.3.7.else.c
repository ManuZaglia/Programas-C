/*-----------------------------------------------------------------
2.3.7 O IMC (Índice de Massa Corpórea) é um bom sinalizador para 
o controle do nosso peso. A fórmula é simples:IMC = peso / (altura2)
através   da   tabela   abaixo   podemos   saber   se   precisamos
emagrecer, engordar ou manter o nosso peso. Faça um programa que 
receba a altura e o peso do usuário. Deacordo com a fórmula do IMC, 
mostre a situação do usuário.
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
	else{
		if(imc<25){
			printf("Peso normal");
		}
		else{
			if(imc<=35){
			printf("Acima do peso normal");
			}
			else{
			printf("Obeso");
			}
			
		}
	}
    printf(". Seu IMC eh %.2f", imc);
	getch();
	}
