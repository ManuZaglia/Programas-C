/*---------1.7.5 Fa�a um programa que receba o nome do usu�rio, quantas horas ele trabalhou no m�s e o valor da sua hora trabalhada. 
Mostre seu nome e o valor do seu sal�rio. Neste caso, voc� deve reservar vari�veis para o nome, quant. de horas trabalhadas, valor da 
hora e para o salario (que ser� calculado).--------------------------------------------------------------------------------------*/

int main(){
	char nome[30];
	float qtd_ht, vl_ht, sal_tot;
	
	printf("Digite seu nome:");
	scanf("%s", nome);
	printf("Digite o numero de horas trabalhadas no m�s: ");
	scanf("%f", &qtd_ht);
	printf("Digite o valor da sua hora trabalhada: ");
	scanf("%f", &vl_ht);
	
	sal_tot=qtd_ht*vl_ht;
	
	printf("%s, seu sal�rio � de %.2f", nome, sal_tot);
	
	getch();
}
