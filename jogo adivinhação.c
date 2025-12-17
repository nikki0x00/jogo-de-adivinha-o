#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int certo = 1 + rand() % 6;
    int num;
    printf("--- Boas vindas ao jogo de adivinhação da Nikki ---\n");
    
    printf("Qual sera o número no dado?\n");
    
    while (1) {
       if (scanf("%d", &num) == 1 && num >= 1 && num <= 6) {
       break;
    } else {
       printf("--- ERRO:Opção invalida, tente um número entre 1 e 6 ---\n");
       while (getchar() != '\n'); // Limpeza do buffer OBRIGATORIA para letras/palavras
       }
      }
    
    if (num == certo) {
        printf("Parabens, você acertou!");
    } else printf("Não foi dessa vez, a resposta era %d", certo);
    
    return 0;
}