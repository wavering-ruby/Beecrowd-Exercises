#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);

    // O exercício pede para calcular em quantos minutos o carro Y demoraria
    // para estar na frente do carro X, com base em uma distância dada.

    // Em geral, o exercício fala que basicamente o carro Y a cada 1km de distância,
    // ele demora cerca de 2 minutos. 

    printf("%d minutos\n", d * 2);

    return 0;
}