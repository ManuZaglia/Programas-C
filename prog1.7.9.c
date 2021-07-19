/*-----1.7.9 Faça um programa de uma calculadora simples que permita que o usuário 
digite dois valores inteiros. A calculadora, logo após a digitação dos números, deverá 
mostrar o valor da soma, da subtração, da multiplicação e 
da divisão dos valores digitados.---------------------------------------------------*/

int main(){
	int num1, num2, soma, sub, mult, div;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &num1);
	printf("Digite outro numero inteiro: ");
	scanf("%i", &num2);
	
	soma=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	
	printf(" Soma: %i\n Subtracao: %i\n Multiplicacao: %i\n Divisao: %i.", soma, sub, mult, div);
	
	getch();
}
