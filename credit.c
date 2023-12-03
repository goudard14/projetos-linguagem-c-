#include <cs50.h>
#include <stdio.h>

int LunhCheck(long long numero)
{
  int soma = 0;
  int dígito = 0;
  int duplicar = 0;

  while (numero > 0)
  {
    dígito = numero % 10;
    if (duplicar)
    {
      dígito *=2;
      if (dígito > 9)
      {
        dígito -= 9;
      }
    }
    soma += dígito;
    duplicar = !duplicar;
    numero /= 10;
  }
  return (soma %10 == 0) ? 1 : 0;
}

// função principal
int main(void)
{
    long dígitos;
    do
    {
      dígitos = get_long("número do cartão:");
    }
    while(dígitos < 1000000000000);

        if ((dígitos >= 340000000000000 && dígitos <= 349999999999999) ||
           (dígitos >= 370000000000000 && dígitos <= 379999999999999))
        {
          printf("AMERICAN EXPRESS\n");
        }
        else if (dígitos >= 5100000000000000 && dígitos <= 5599999999999999)
        {
          printf("MASTERCARD\n");
        }
        else if ((dígitos >= 4000000000000 && dígitos < 4999999999999) ||
                (dígitos >= 4000000000000000 && dígitos < 4999999999999999))
        {
          printf("VISA\n");
        }
        else
        {
          printf("INVALIDO\n");
        }
}
