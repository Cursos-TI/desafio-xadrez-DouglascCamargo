#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

int torre = 1; 
int bispo = 1;
int rainha = 1;

// Implementação de Movimentação do Bispo
while (bispo <= 2) {
    printf("%d Bispo para cima e direita!..\n", bispo);
    bispo++;
}

//colocado \n para pular a linha e imprimir informação de proximo movimento
printf("\n");
printf("Proximo movimento!\n");
printf("\n");

// Implementação de Movimentação da Torre
for(torre = 1; torre <= 5; torre++) {
    //imprime o movimento
    printf("%d Torre para direita!..\n", torre); 
}

printf("\n");
printf("Proximo movimento!\n");
printf("\n");

    // Implementação de Movimentação da Rainha
    do {
       //imprime o movimento
        printf("%d Rainha para esquerda!..\n", rainha);
        rainha++;

    } while (rainha <= 8);

   

    return 0;
}
