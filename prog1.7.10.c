/*------1.7.10 Faça um programa que calcule a media da temperatura ocorrida em um dia. O usuário deverá digitar 5 
temperaturas e o programa deverá mostrar em tela a média das temperaturas.-----------------------------*/

int main (){
	float temp1, temp2, temp3, temp4, temp5, soma_temp, med_temp;
	
	printf("Digite 5 temperaturas durante 1 dia: ");
	scanf("%f", &temp1);
	scanf("%f", &temp2);
	scanf("%f", &temp3);
	scanf("%f", &temp4);
	scanf("%f", &temp5);
	
	soma_temp=temp1+temp2+temp3+temp4+temp5;
	med_temp=soma_temp/5;
	
	printf("A media é %.2f", med_temp);
	
	getch();
}
