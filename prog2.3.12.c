/*---------------------------------------------------------
2.3.12 Receba 3 números inteiros e distintos, a partir do usuário, e
mostre-os em ordem crescente.
-------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1, num2, num3;

     printf("Digite o primeiro numero inteiro:\n");
     scanf("%i %i %i", &num1, &num2, &num3);

   printf("Ordem Crescente:\n\n");
   if(num1<num2 && num2<num3){
      printf("%i %i %i", num1, num2, num3);
   }
    else if(num2<num1 && num1<num3){
      printf("%i %i %i", num2, num1, num3);
	}
	else if(num3<num1 && num2<num1){
		printf("%i %i %i", num3, num2, num1);
	}
	else if(num1<num3 && num3<num2){
		printf("%i %i %i", num1, num3, num2);
	}
	else if(num2<num3 && num3<num1){
		printf("%i %i %i", num2, num3, num1);
	}
	else{
		printf("%i %i %i", num3, num1, num2);
	}
		
getch();
}
