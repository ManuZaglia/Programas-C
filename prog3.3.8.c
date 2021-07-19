/*-------------------------------------------------------------------
3.3.8 Em uma loja, todos os clientes que comprarem mais de R$ 
300,00 receberão um desconto proporcional ao valor de sua 
compra, de acordo com a tabela abaixo:

até 500,00 - 5%
de 501,00 a 1000,00 - 10%
acima de 1000,00 - 12%

Você foi incumbido de fazer um programa que permita que o 
cliente entre com o valor dos produtos comprados e mostre o total
da compra, o valor do desconto e o preço a pagar. Pergunte ao 
usuário se deseja terminar a digitação dos produtos e também se 
deseja finalizar o programa.

--------------------------------------------------------------------*/
#include <stdio.h>
#include <conio.h>

int main() {
    float valorProduto, valorTotal = 0;
    char teclaDoPanico;

    while(teclaDoPanico != 'f') {
        printf("Digite o valor do produto: ");
        scanf("%f", &valorProduto);

        valorTotal += valorProduto;

        fflush(stdin);

        printf("\nSe quiser sair aperte 'f' caso contrario aperte 'enter': ");
        scanf("%c", &teclaDoPanico);
    }
    if(valorTotal <= 500) valorTotal -= (valorTotal * 0.05);
    else if(valorTotal > 500 && valorTotal <= 1000) valorTotal -= (valorTotal * 0.1);
    else valorTotal -= (valorTotal * 0.12);

    printf("O total e de: %.2f\n", valorTotal);

    getch();
    return 0;
}
