#include <stdio.h>

    // ================= MOVIMENTOS =================
    void direita(int d){
        if (d>0) {
            printf("Direita\n");
            direita(d-1);
        }
    }
    void esquerda(int e){
        if (e>0) {
            printf("Esquerda\n");
            esquerda(e-1);
        }
    }
    void cima(int c){
        if (c>0) {
            printf("Cima\n");
            cima(c-1);
        }
    }
    void baixo(int b){
        if (b>0) {
            printf("Baixo\n");
            baixo(b-1);
        }
    }


    int main() {
   // ================= BISPO =================
    printf("\nMovimento do Bispo\n");
    direita(5);
    cima(5);
   // ================= TORRE =================
    printf("\nMovimento da Torre\n");
    direita(5);
   // ================= RAINHA =================
    printf("\nMovimento da Rainha\n");
    esquerda(8);
    printf("\n"); // Printf para pular uma linha.
   // ================= CAVALO =================
    // Movimento: baixo, baixo, esquerda
    int i, j;
    // loop para "Baixo"
    for (i = 1; i <= 1; i++) // loop so para a estrutura externa, vai repetir so 1 vez
    {
        for (j = 1; j <= 2; j++) // loop que ira repetir 2 vezes
        {
            printf("Cima\n");
        }
        // depois do loop interno, imprime "Direita"
        printf("Direita\n");
    }

    return 0;
}
