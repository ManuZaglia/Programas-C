/*------------------------------------------------------
4.2.1Faça um programa que receba 5 valores inteiros em um 
vetor e mostre na tela, os valores na ordem inversa.
-------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main () {
	int c;
	int valores[5];
	
	for (c=0;c<5;c++){
		scanf("%i", &valores[c]);
	}
	
	for (c=4;c>=0;c--){
	    printf("\n%i", valores[c]);
	   
    }
    
    getch();   
}
