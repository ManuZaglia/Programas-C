/*------------------1.7.3 Fa�a um programa que imprima um nome, escolhido pelo usu�rio, na tela. Voc� dever� permitir
que o usu�rio digite (fun��oscanf())  este nome, definindo uma vari�vel para guardar este nome na mem�ria.----------*/

int main (){
	
	char nome[30];
	
	printf("Digite o seu nome:");
	scanf("%s", nome);
	
	printf("Eu me chamo %s", nome);
	
	getch();
}
