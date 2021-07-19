/*--------------------------------------------------------------------------------------------------
1.7.14 Uma empresa de transporte rodoviário precisa saber o tempo exato que um ônibus demorou para 
sair da sua cidade origem e chegar na sua cidade destino. Para isso, pediu que voce fizesse um programa 
(faça primeiro o algoritmo e o fluxograma) que recebesse o horário de saída (HH:MM:SS) e o horário de chegada 
(HH:MM:SS), e mostrasse o tempo exato gasto na viagem. 
Exemplo:
Horário de Saída:  14:28:32
Horário de Chegada:  17:47:52
Tempo de Viagem:  03:19:20
Dica: Receba as entradas em variáveis inteiras separadas. Converta todas para segundos, execute a diferença
e converta o resultado para horas, minutos e segundos.
-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>

int main(){
	int hora_s, min_s, seg_s, hora_c, min_c, seg_c, hora_sf, hora_cf, min_sf, min_cf, temp1, temp2, temp3, temp1f, temp2f, temp3f;
	
	printf("Digite o horario de saida do onibus: ");
	scanf("%i %i %i", &hora_s, &min_s, &seg_s);
	printf("Digite o horario de chegada do onibus: ");
	scanf("%i %i %i", &hora_c, &min_c, &seg_c);
	
	hora_sf=hora_s*3600;
	hora_cf=hora_c*3600;
	min_sf=min_s*60;
	min_cf=min_c*60;
	
	temp1=hora_cf-hora_sf;
	temp2=min_cf-min_sf;
	temp3=seg_c-seg_s;
	
	temp1f=temp1/3600;
	temp2f=temp2/60;
	temp3f=temp3;
	
	printf("Tempo gasto na viagem eh de: %i horas %i minutos e %i segundos.", temp1f, temp2f, temp3f);
	
	getch();
}
