#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //pega os numeros do usuario
    int x = get_int("x: ");
    int y = get_int("y: ");

    //divide x por y
    float z = (float) x / (float) y;
    printf("%f\n", z);
}
