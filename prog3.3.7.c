/*------------------------------------------------------------------
3.3.7 Fa�a um programa que calcule e mostre o quadrado de um 
n�mero N inteiro positivo, digitado pelo usu�rio. O c�lculo deve 
ser feito atrav�s da soma dos N primeiros n�meros �mpares. Ex.: 
Se N=3 o programa calcular� 1+3+5=9, que � o quadrado de 3.

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
