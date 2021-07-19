/*-----------1.7.11 A tabela abaixo mostra o valor do câmbio de moedas estrangeiras para cada real. 
Faça um programa onde o usuário entre com uma quantia em real e o programa mostre este valor em outras moedas.-----*/

int main (){
	float real, dolar, euro;
	
	printf("Valor em Real: ");
	scanf("%f", &real);
	
	dolar=real*1.6;
	euro=real*3.1;
	
	printf(" Valor em Dolar %.2f\n Valor em Euro %.2f", dolar, euro);
	getch();
}
