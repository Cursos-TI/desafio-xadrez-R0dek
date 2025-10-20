#include <stdio.h>

int main()
{
    int t = 1, b, r = 1;  //Variáveis de cada peça


//Implementação da movimentação da torre
    while (t <= 5)
    {
        printf("A torre andou %d casas para a direita!\n", t);
        t++;
    }
printf("----------------------------------------------------\n\n");


//Implementação da movimentação do bispo
for (b = 1; b <= 5; b++)
{
    printf("O bispo andou %d casas para cima, direita!\n", b);

}
printf("----------------------------------------------------\n\n");


//Implementação da movimentação da rainha
    do
    {
        printf("A rainha andou %d casas para a esquerda!\n", r);
        r++;
    } while (r <= 8);

printf("----------------------------------------------------\n\n");
}