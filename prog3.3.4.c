/*------------------------------------------------------------
3.3.4Fa�a um programa que permita que o usu�rio digite a idade 
de 10 funcion�rios e ap�s a digita��o, mostre a somat�ria das 
idades. A soma das idades deve ser feita dentro do looping e 
apenas a exibi��o fora dele.
------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>

int main(){
	int cont=1, idade, somaid=0;
	
	printf("Digite a idade dos funcion�rios:\n");
	while(cont <= 10){  
	
	printf("\n Idade: ");
	scanf("%i", &idade);
	somaid=somaid+idade;               //acumulador
	cont++;                          // contador 
	
    }
    printf("Soma das idades dos funcion�rios = % i", somaid);
    
getch ();
}
