#include <stdio.h>

int main() {
    // ================= TORRE =================
    // Movimento: 5 casas para a direita
    int casasTorre = 5;  
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ================= BISPO =================
    // Movimento: 5 casas na diagonal
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ================= RAINHA =================
    // Movimento: 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // ================= CAVALO =================
    // Movimento: baixo, baixo, esquerda
    int i, j;
    // loop para "Baixo"
    for (i = 1; i <= 1; i++) // loop so para a estrutura externa, vai repetir so 1 vez
    {
        for (j = 1; j <= 2; j++) // loop que ira repetir 2 vezes
        {
            printf("Baixo\n");
        }
        // depois do loop interno, imprime "Esquerda"
        printf("Esquerda\n");
    }

    return 0;
}
