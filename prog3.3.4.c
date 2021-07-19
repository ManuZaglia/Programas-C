/*------------------------------------------------------------
3.3.4Faça um programa que permita que o usuário digite a idade 
de 10 funcionários e após a digitação, mostre a somatória das 
idades. A soma das idades deve ser feita dentro do looping e 
apenas a exibição fora dele.
------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main(){
	int cont=1, idade, somaid=0;
	
	printf("Digite a idade dos funcionários:\n");
	while(cont <= 10){  
	
	printf("\n Idade: ");
	scanf("%i", &idade);
	somaid=somaid+idade;               //acumulador
	cont++;                          // contador 
	
    }
    printf("Soma das idades dos funcionários = % i", somaid);
    
getch ();
}
