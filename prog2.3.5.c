/*-----2.3.5Um restaurante oferece um desconto de 7% para todos os 
clientes que gastarem mais que R$ 250,00 no fechamento da conta. 
Faça um programa que pergunte ao usuário qual o valor da conta e 
mostre o valor real a ser pago.-------------------------------*/

#include<stdio.h>
#include<conio.h>
int main (){
	float conta, desc;

printf("Valor da conta: ");
scanf("%f", &conta);

if(conta>250){
	desc=conta*0.07;
	conta=conta-desc;
}
printf("Valos a ser pago: R$%.2f", conta);


getch();
}
