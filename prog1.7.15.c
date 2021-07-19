/*---------------------------------------------------------------
1.7.13 Uma empresa de engenharia vai lotear uma fazenda e deseja 
dividi-la em 3 categorias (A, B e C)  de acordo com o tamanho do 
lote. Toda a fazenda será dividido da seguinte forma:20% para a 
Categoria A, 30% para a Categoria B e 50% para a Categoria C. A 
Categoria A terá 4 lotes, a Categoria B terá 10 lotes e a Categoria 
C terá 20 lotes. Você foi designado para desenvolver um programa 
que mostre a área de cada lote, das categorias A, B e C.. Receba 
do usuário a área total da fazenda, e para um bom entendimento do 
problema, considere a fazenda com formato retangular. 
----------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
int main (){
	float area_tot, catA, catB, catC, catAA, catBB, catCC;
		
	printf("Digite a area total: ");
	scanf("%f", &area_tot);
	
	catA=area_tot*20/100;
	catB=area_tot*30/100;
	catC=area_tot*50/100;
	
	printf("Cada categoria de lotes (A, B e C) tera respectivamente %.2f Km, %.2f Km e %.2f Km\n\n", catA, catB, catC);
	
	catAA=catA/4;
	
	printf("Categoria A tera 4 lotes e cada um tera %.2f Km\n", catAA);
	
	catBB=catB/10;
	
	printf("Categoria B tera 10 lotes e cada um tera %.2f Km\n", catBB);
	
	catCC=catC/20;
	
	printf("Categoria C tera 20 lotes e cada um tera %.2f Km", catCC);
	
	
	
	getch();
}
