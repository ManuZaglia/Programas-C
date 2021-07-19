/*-----------------------------------------------------
3.3.5 Um usuário tem em suas mãos 100 Notas Fiscais. 
Faça um programa que receba seus valores e calcule o 
total de todas as Notas.
-----------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	float valorNota, totalNota;
	int contador = 0;
	
	while(contador < 10){
		printf("Digite o valor da nota fiscal: ");
		scanf("%f", &valorNota);
		totalNota += valorNota;
		contador=contador+1;
	}
	
	printf("O valor total das notas eh de %.2f", totalNota);
	
	
	
	getch();
}
