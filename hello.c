#include <cs50.h>
#include <stdio.h>

    int main(void)
{
    string answer = get_string("Qual o seu nome?");

    printf("olá, %s\n", answer);
}
