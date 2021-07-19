/*------------------1.7.3 Faça um programa que imprima um nome, escolhido pelo usuário, na tela. Você deverá permitir
que o usuário digite (funçãoscanf())  este nome, definindo uma variável para guardar este nome na memória.----------*/

int main (){
	
	char nome[30];
	
	printf("Digite o seu nome:");
	scanf("%s", nome);
	
	printf("Eu me chamo %s", nome);
	
	getch();
}
