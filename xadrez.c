#include <stdio.h>

int main() {
    
    int casasTorre = 5; 
     // Simulação da Torre (movimento para a direita) - usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
     int casasBispo = 5;
     // Simulação do Bispo (diagonal para cima e à direita) - usando WHILE
      printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }



}