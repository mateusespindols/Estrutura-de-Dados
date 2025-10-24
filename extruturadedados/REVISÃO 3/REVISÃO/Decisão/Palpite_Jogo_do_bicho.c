#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* bichos[] = {
    "Avestruz", "Águia", "Burro", "Borboleta", "Cachorro",
    "Cabra", "Carneiro", "Camelo", "Cobra", "Coelho",
    "Cavalo", "Elefante", "Galo", "Gato", "Jacaré",
    "Leão", "Macaco", "Porco", "Pavão", "Peru",
    "Touro", "Tigre", "Urso", "Veado", "Vaca"
};

void gerarPalpite() {
    int numero = rand() % 10000; 
    int doisUltimos = numero % 100;
    int grupo = (doisUltimos / 4) % 25;
    const char* bicho = bichos[grupo];
    
    printf("Número: %04d\n", numero);
    printf("Bicho: %s\n", bicho);
    printf("Grupo: %d\n", grupo + 1);
}

void analisarNumero() {
    printf("Digite um número (0000-9999): ");
    char input[100];
    scanf("%s", input);
    
    int numero;
    if (sscanf(input, "%d", &numero) == 1) {
        if (numero >= 0 && numero <= 9999) {
            int doisUltimos = numero % 100;
            int grupo = (doisUltimos / 4) % 25;
            const char* bicho = bichos[grupo];
            
            printf("Número: %04d\n", numero);
            printf("Bicho: %s\n", bicho);
            printf("Grupo: %d\n", grupo + 1);
        } else {
            printf("Número inválido! Digite entre 0000 e 9999.\n");
        }
    } else {
        printf("Número inválido!\n");
    }
}

int main() {
    srand(time(NULL));
    
    printf("GERADOR DE PALPITES - JOGO DO BICHO\n");
    
    while (1) {
        printf("\n1 - Gerar palpite\n");
        printf("2 - Analisar número\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        
        char opcao[10];
        scanf("%s", opcao);
        
        if (strcmp(opcao, "1") == 0) {
            gerarPalpite();
        } else if (strcmp(opcao, "2") == 0) {
            analisarNumero();
        } else if (strcmp(opcao, "3") == 0) {
            printf("Até mais!\n");
            break;
        } else {
            printf("Opção inválida!\n");
        }
    }
    
    return 0;
}