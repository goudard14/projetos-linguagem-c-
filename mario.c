#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    do
    {
       altura = printf("número positivo entre 1 e 8: ");
       scanf("%d", &altura);
    }
    while(altura < 1 || altura > 8);
    //parte 2 do código
     for(int i = 0; i < altura; i++)
    {
        for(int j = 0; j < altura - i - 1; j++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
    {
             printf ("#");
    }
    printf ("  ");
    for (int j = 0; j <= i; j++)
    {
        printf ("#");
    }
        printf ("\n");
    }
}
