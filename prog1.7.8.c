/*--------------1.7.8 Fa�a um programa que permita que o usu�rio digite dois valores inteiros. 
Multiplique estes valores guardando o produto em uma terceira vari�vel. 
Mostre o resultado da multiplica��o.------------------------------------------------------*/

int main(){
	int num1, num2, num_fin;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &num1);
	printf("Digite outro numero inteiro: ");
	scanf("%i", &num2);
	
	num_fin=num1*num2;
	
	printf("Resultado: %i", num_fin);
	
	getch();
}
