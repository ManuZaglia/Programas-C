/*-----1.7.9 Fa�a um programa de uma calculadora simples que permita que o usu�rio 
digite dois valores inteiros. A calculadora, logo ap�s a digita��o dos n�meros, dever� 
mostrar o valor da soma, da subtra��o, da multiplica��o e 
da divis�o dos valores digitados.---------------------------------------------------*/

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
