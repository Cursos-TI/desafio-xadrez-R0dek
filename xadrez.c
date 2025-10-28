#include <stdio.h>

int main()
{
    int t = 0, b = 0, r = 0;  //Variáveis de cada peça

   
    movitorre(t);
    movirainha(r);
    movibispo(b);
    movicavalo();
}


//Implementação da movimentação da torre
void movitorre(int t)
{
    if (t <= 4)
    {
        printf("A torre moveu %d casas para a direita!\n", t+1);
        movitorre(t+1);
    }

}

//Implementação da movimentação do bispo
void movibispo(int b)
{
    if (b < 1)
    {      
        for (int i; i < 4; i++)
        {
            for (int j; j < 5; j++)
            {
                printf("O bispo moveu %d casas para cima!\n", j+1);
            }
            printf("O bispo moveu %d casas para a direita!\n", i+1);
        }
        movibispo(b+1);
    }
}


//Implementação da movimentação da rainha
void movirainha(int r)
{
    if (r < 8 )
    {
        printf("A Rainha moveu %d casas para a esquerda\n", r+1);
        movirainha(r+1);
    }
    
}


//Implementação da movimentação do cavalo

void movicavalo()
{
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("O cavalo moveu %d casas para cima!\n", j+1);
            }
            printf("O cavalo moveu %d casa para a direita!\n", i+1);
        }    
}






