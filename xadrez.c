#include <stdio.h>

// Função recursiva para movimento da Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo: loop aninhado com saída "Cima Direita"
void moverBispo(int passosVerticais, int passosHorizontais) {
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < passosVerticais; i++) { // loop vertical
        for (int j = 0; j < passosHorizontais; j++) { // loop horizontal
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }
    printf("\n");
}

// Movimento do Cavalo: loops aninhados com múltiplas variáveis e condições
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int m = 0; m < movimentos; m++) {
        int i = 0, j = 0;
        for (; i < 2 || j < 1;) {
            if (i < 2) {
                printf("Cima\n");
                i++;
            } else if (j < 1) {
                printf("Direita\n");
                j++;
            }
        }
    }
    printf("\n");
}

int main() {
    // Número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5; // diagonal: 5 "passos" (verticais e horizontais)
    const int casasRainha = 8;
    const int movimentosCavalo = 1;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo (com loop aninhado)
    moverBispo(casasBispo, casasBispo); // move diagonal "Cima Direita" casasBispo vezes

    // Movimento da Rainha (com recursão)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo (com loops complexos)
    moverCavalo(movimentosCavalo);

    return 0;
}