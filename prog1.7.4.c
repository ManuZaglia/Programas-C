/*----1.7.4 Fa�a um programa que receba o nome e a idade do usu�rio e depois mostre-os na tela.
Devem ser definidas duas vari�veis  para guardar nome e idade na mem�ria.--------------*/

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
