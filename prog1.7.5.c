/*---------1.7.5 Faça um programa que receba o nome do usuário, quantas horas ele trabalhou no mês e o valor da sua hora trabalhada. 
Mostre seu nome e o valor do seu salário. Neste caso, você deve reservar variáveis para o nome, quant. de horas trabalhadas, valor da 
hora e para o salario (que será calculado).--------------------------------------------------------------------------------------*/

int main(){
	char nome[30];
	float qtd_ht, vl_ht, sal_tot;
	
	printf("Digite seu nome:");
	scanf("%s", nome);
	printf("Digite o numero de horas trabalhadas no mês: ");
	scanf("%f", &qtd_ht);
	printf("Digite o valor da sua hora trabalhada: ");
	scanf("%f", &vl_ht);
	
	sal_tot=qtd_ht*vl_ht;
	
	printf("%s, seu salário é de %.2f", nome, sal_tot);
	
	getch();
}
