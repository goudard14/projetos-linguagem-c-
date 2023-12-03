#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float reais;
    do
    {
    reais = get_float("troco em reais: ");
    }
    while(reais < 0.01);

    int centavos = round(reais * 100);
    int contador = 0;
    {
        float moedas[5] = {1.0, 0.50, 0.25, 0.10, 0.05};
        int quantidade_moedas[5] = {0};

        for (int i = 0; i < 5; i++)
        {
            while (centavos >= moedas[i] * 100)
            {
                quantidade_moedas[i]++;
                centavos -= moedas[i] * 100;
                contador++;
            }
        }
        printf("número de moedas necessarias: %d\n", contador);
        printf("detalhes das moedas:\n");

        for (int i = 0; i < 5; i++)
        {
            printf("quantidade de moedas de %.2f: %d\n", moedas[i], quantidade_moedas[i]);
        }
    }
}
