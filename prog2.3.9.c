/*------2.3.9  Dados 3 valores representando os lados de um triângulo,
verifique se este triângulo é escaleno (3   lados diferentes), isósceles 
(2 lados iguais) ou eqüilátero (3 lados iguais).-------------------*/



int main(){
	float lado1, lado2, lado3;
    
    printf("Digite o valor de cada lado do triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
        
    
	if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		printf("Escaleno!");
	}
	else{
		if(lado1==lado2&&lado2==lado3){
			printf("Equilatero!");
		}
		else{
		printf("Isoceles!");
	}
		
	}
    
    
getch();
}
