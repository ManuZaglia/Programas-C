/*---------------1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para cada hora extra, 50% a mais do valor da hora normal. 
Faça um programa que receba o nome de um funcionário, quantas horas normais e quantas horas extras ele trabalhou, assim como o 
valor da hora normal. Mostre, no final do programa, o salario líquido deste funcionário.-----------------------------*/

int main(){
	char nome[30];
	float qtd_hn, qtd_he, val_hn, val_he, sal_mes, sal_tot;
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("Digite a quantidade de horas normais trabalhadas: ");
	scanf("%f", &qtd_hn);
	printf("Digite quantas horas extras voce trabalhou: ");
	scanf("%f", &qtd_he);
	printf("Digite o valor da hora normal: ");
	scanf("%f", &val_hn);
	
	val_he=val_hn*1.5;
	sal_mes=qtd_hn*val_hn;
	sal_tot=sal_mes+(qtd_he*val_he);
	
	printf("%s, seu salario total é de %.2f", nome, sal_tot);
	
	
	
	getch();
}
