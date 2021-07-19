/*----1.7.4 Faça um programa que receba o nome e a idade do usuário e depois mostre-os na tela.
Devem ser definidas duas variáveis  para guardar nome e idade na memória.--------------*/

int main(){
	char nome[30];
	int idade;
	
	printf("Digite seu nome:");
	scanf("%s", nome);
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	printf("Me chamo %s e tenho %i anos", nome, idade);
	
	
	getch();
}
