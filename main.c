#include <stdio.h>

int main(void) {
    int ano, idade, mil;

    scanf("%d", &ano);

    idade = 2025 - ano;

    mil = ano - idade;

    printf("%d", mil);
}