/*--------------2.3.1Uma empresa deseja bonificar seus funcionários de acordo com a quantidade de vendas do mês. 
O gerente lhe entregou uma tabela para que você faça um programa que mostre o valor das bonificações.---------*/

#include<stdio.h>
#include<conio.h>

int main (){
	float val_mes, val_tot, bonif;
	
	printf("Digite o valor vendido no mes: ");
	scanf("%f", &val_mes);
	
	
	if (val_mes<1500,00){
		bonif=val_mes*0.05;
		val_tot=bonif+val_mes;
	}
	
	if (val_mes>3500,00){
		bonif=val_mes*0.10;
		val_tot=bonif+val_mes;
	}
	else{
		bonif=val_mes*0.07;
		val_tot=bonif+val_mes;
	}
	
	printf("Valor com bonificação R$%.2f", val_tot);
	
getch();
}

