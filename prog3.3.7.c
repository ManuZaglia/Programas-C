/*------------------------------------------------------------------
3.3.7 Faça um programa que calcule e mostre o quadrado de um 
número N inteiro positivo, digitado pelo usuário. O cálculo deve 
ser feito através da soma dos N primeiros números ímpares. Ex.: 
Se N=3 o programa calculará 1+3+5=9, que é o quadrado de 3.

-------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	
    int n, imp = 0, cont = 0, quad;

    printf("Digite um valor: ");
    scanf("%i", &n);

    quad = n * n;

    do{ 
        cont++;
        if( cont %2 == 0 ){
        }
     else {
          imp = imp+cont;
    }
    } while(imp < quad);
        printf("O quadrado de %d = %d ", n , imp);

}
