#include <stdio.h>

int main()
{
    int batalha[10][10];
    // acrescentar dois navios com numero 3 horizontal e vertical
    // e preencher as demais casas com sero
    printf("\n***** impressao com os dois navios ****\n");
    printf("    A B C D E F G H I J\n"); // cabecalho
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            printf(" "); // ajuste de espaco linha 10
        }
        printf("%d  ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            if (i == 3 && 3 < j && j < 7)
            {
                batalha[i][j] = 3;
            }
            else if (j == 1 && 3 < i && i < 7)
            {

                batalha[i][j] = 3;
            }
            else
            {
                batalha[i][j] = 0;
            }

            // mostra a linha matriz
            printf("%d ", batalha[i][j]);
        }

        printf("\n");
    }
    return 0;
}
