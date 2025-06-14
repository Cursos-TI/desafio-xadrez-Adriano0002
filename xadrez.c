#include <stdio.h>
    // Simulação de Movimento de Peças de Xadrez usando for, while e do-while
    
int main() {
    
    int casasTorre = 5; 
     // Movimentaçao da Torre (movimento para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
     int casasBispo = 5;

     // Movimentaçao do Bispo (diagonal para cima e à direita) 
      printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    int casasRainha=8;

     // Movimentaçao da Rainha (movimento a esquerda)
      printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    int casasCavalo = 1;

    // Movimentaçao da Cavalo (movimento em L)
       printf("\nMovimento do Cavalo:\n");
    while (casasCavalo--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n");
            }  
            printf("Esquerda\n");  
        }
    {
        
    }
    

}