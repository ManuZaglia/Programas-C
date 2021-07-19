/*--------------1.7.8 Faça um programa que permita que o usuário digite dois valores inteiros. 
Multiplique estes valores guardando o produto em uma terceira variável. 
Mostre o resultado da multiplicação.------------------------------------------------------*/

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
