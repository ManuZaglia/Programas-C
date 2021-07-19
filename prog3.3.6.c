/* Faça um programa que calcule e mostre o quadrado de um 
número 3 inteiro positivo, digitado pelo usuário. O cálculo deve 
ser feito através da soma dos 3 primeiros números ímpares. Ex.: 
Se N=3 o programa calculará 1+3+5=9, que é o quadrado de 3. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int n, soma = 0 , contador = 0, quad, quadrado;

    printf("Digite o numero: ");
    scanf("%d", &n);
    quadrado = n * n;

    do
    {
            contador++;

            if (contador % 2==0)
            {

            }
            else 
            {
                soma = soma + contador;
            }
            printf("%d\t %d\n", contador, soma);
    }while(soma < quadrado);


    printf("O quadrado de %d = %d ", n , soma);

    getch();
    return 0;
}
