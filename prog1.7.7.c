/*-------------1.7.7 Faça um programa que receba do usuário 
um numero qualquer e mostre o quadrado deste número.-------*/

int main(){
	float numero, num_quad;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	num_quad=numero*numero;
	
	printf("O quadrado de %.2f é %.2f", numero, num_quad);
	
	getch();
	
}
