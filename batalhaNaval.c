#include <stdio.h>

int main()
{
    int batalha[10][10];
    // acrescentar dois navios com numero 3 horizontal e vertical
    // e preencher as demais casas com zero.
    printf("\n****** impressao com os dois navios ******\n");
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
            else if((i==j && (i>5 && i<9)) || ((i+j==9) && (i>5 && i<9)))
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
   

printf("\n******* INICIO DO DESAFIO MESTRE *******\n");
// CRUZ, OCTAEDRO E CONE
//zerar a matriz
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        batalha[i][j] = 0;
    }
    
}


printf("***** rotina da cruz *****\n");

for (int i = 0; i < 5; i++) // cruz no canto sup. esq
{
   for (int j = 0; j < 5; j++)
   {
    if (i==2 || j==2){
        batalha[i][j] = 1;
    }
   }
    
}
//mostra a cruz
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", batalha[i][j]);
    }
    printf("\n");
}
printf("***** rotina do cone *****\n");
for (int i = 1; i < 4; i++) // cone
{
   for (int j = 5; j < 10; j++)
   {
    if (i==3 || j==7){
        batalha[i][j] = 1;
    }
     if((i == 2) && (j==6 || j == 8))
     { batalha[i][j] = 1;}
   }
    
}

//mostrar o cone
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", batalha[i][j]);
    }
    printf("\n");
}
printf("***** rotina do losango *****\n");

for (int i = 7; i < 10; i++) // cone
{
   for (int j = 7; j < 10; j++)
   {
    if (i==8 || j==2){
        batalha[i][j] = 1;
    }
     if((i == 9) && (j==8 || j == 6))
     { batalha[i][j] = 1;}
     if(i==7 && j==8){
      batalha[i][j] = 1;   
     }
   }
    
}

//mostrar o losango
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", batalha[i][j]);
    }
    printf("\n");
}

 return 0;
}
