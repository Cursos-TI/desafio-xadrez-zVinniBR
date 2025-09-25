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

    return 0;
}
