/*-----------------------------------------------------------
3.3.2Imprima o quadrado dos 10 primeiros números inteiros.
------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main(){
	
	int i=0;
	
	while(i <= 10){
		printf("\nO quadrado de %i eh %i", i, i*i);
		i++;
    }
	
	
	getch();
}

