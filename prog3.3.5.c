/*-----------------------------------------------------
3.3.5 Um usu�rio tem em suas m�os 100 Notas Fiscais. 
Fa�a um programa que receba seus valores e calcule o 
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
