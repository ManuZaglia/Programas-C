/*------------------1.7.12 Faça um programa que calcule e mostre o salário líquido de um funcionário. 
O programa deve receber o salário bruto e considerar que todo funcionário tem um desconto  de 
10% de IR no salário bruto.---------------------------*/

int main (){
	float sal_brt, sal_liq;
	
    printf("Salario bruto: ");
    scanf("%f", sal_brt);
    
    sal_liq=sal_brt*0.10;
    
    printf("Salario liquido é de R$%.2f", sal_liq);
	
	getch();
}
