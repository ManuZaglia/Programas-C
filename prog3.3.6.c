/* Fa�a um programa que calcule e mostre o quadrado de um 
n�mero 3 inteiro positivo, digitado pelo usu�rio. O c�lculo deve 
ser feito atrav�s da soma dos 3 primeiros n�meros �mpares. Ex.: 
Se N=3 o programa calcular� 1+3+5=9, que � o quadrado de 3. */

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
