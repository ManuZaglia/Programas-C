/*-------------1.7.7 Fa�a um programa que receba do usu�rio 
um numero qualquer e mostre o quadrado deste n�mero.-------*/

int main(){
	float numero, num_quad;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	num_quad=numero*numero;
	
	printf("O quadrado de %.2f � %.2f", numero, num_quad);
	
	getch();
	
}
