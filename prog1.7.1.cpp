/*------------------1.7.12 Fa�a um programa que calcule e mostre o sal�rio l�quido de um funcion�rio. 
O programa deve receber o sal�rio bruto e considerar que todo funcion�rio tem um desconto  de 
10% de IR no sal�rio bruto.---------------------------*/
#include<stdio.h>
#include<conio.h>

int main (){
	float sal_brt, sal_liq;
	
    printf("Salario bruto: ");
    scanf("%f", &sal_brt);
    
    sal_liq=sal_brt*0,90;
    
    printf("Salario liquido %.2f", sal_liq);
	
	getch();
}

