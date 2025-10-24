#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int segredo = rand() % 100 + 1;  // número entre 1 e 100
    int chute, tentativas = 0;

    printf("🎲 Adivinhe o número entre 1 e 100!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > segredo)
            printf("Muito alto!\n");
        else if (chute < segredo)
            printf("Muito baixo!\n");
        else
            printf("🎉 Acertou em %d tentativas!\n", tentativas);
    } while (chute != segredo);

    return 0;
}
