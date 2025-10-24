#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para converter string para minúsculas
void minusculo(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Função que lê a resposta e verifica se está correta
// Retorna 1 se correta, 0 caso contrário (incluindo branco)
int ler_resposta(const char* correta) {
    char resposta[100]; // buffer para armazenar a resposta do usuário

    printf("👉 Sua resposta: ");
    if (fgets(resposta, sizeof(resposta), stdin) == NULL) {
        // Trata EOF como resposta em branco
        printf("⚠️ Resposta em branco. Contado como erro.\n\n");
        return 0;
    }

    // Remove o '\n' do final, se existir
    resposta[strcspn(resposta, "\n")] = 0;

    // Converte para minúsculas para comparação case-insensitive
    minusculo(resposta);

    // Verifica se está em branco
    if (strcmp(resposta, "") == 0) {
        printf("⚠️ Resposta em branco. Contado como erro.\n\n");
        return 0;
    }

    // Verifica se está correta
    if (strcmp(resposta, correta) == 0) {
        printf("✅ Correto!\n\n");
        return 1;
    } else {
        printf("❌ Errado. Resposta correta: %s\n\n", correta);
        return 0;
    }
}

int main() {
    int acertos = 0;

    // -------------------------------
    // Perguntas do quiz
    printf("1) Qual é o plural de 'cidadão'?\n");
    acertos += ler_resposta("cidadãos");

    printf("2) Qual palavra está escrita corretamente?\n");
    printf("a) exceção\nb) exessão\nc) eceção\n");
    acertos += ler_resposta("a");

    printf("3) Qual é a forma correta da concordância?\n");
    printf("a) Faltam entregar os documentos.\nb) Faltam entregar o documentos.\n");
    acertos += ler_resposta("a");

    printf("4) Identifique a função da palavra 'feliz' na frase 'Ela voltou feliz'.\n");
    printf("a) Substantivo\nb) Adjetivo\nc) Verbo\n");
    acertos += ler_resposta("b");

    printf("5) Qual alternativa apresenta uma oração subordinada adverbial causal?\n");
    printf("a) Cheguei cedo para não perder o ônibus.\n");
    printf("b) Não fui à escola porque estava doente.\n");
    printf("c) Se chover, não sairei.\n");
    acertos += ler_resposta("b");

    printf("6) Assinale a frase em que a colocação pronominal está correta:\n");
    printf("a) Me empresta seu livro.\n");
    printf("b) Empresta-me seu livro.\n");
    printf("c) Seu livro me empresta.\n");
    acertos += ler_resposta("b");

    printf("7) Qual das palavras abaixo está acentuada corretamente?\n");
    printf("a) Idéia\nb) Heroi\nc) Pôde\n");
    acertos += ler_resposta("c");

    printf("8) Qual é a classe gramatical da palavra 'ontem'?\n");
    printf("a) Substantivo\nb) Advérbio\nc) Adjetivo\n");
    acertos += ler_resposta("b");

    printf("9) Qual oração apresenta voz passiva?\n");
    printf("a) Os alunos fizeram a tarefa.\n");
    printf("b) A tarefa foi feita pelos alunos.\n");
    printf("c) Eles farão a tarefa amanhã.\n");
    acertos += ler_resposta("b");

    printf("10) Qual é o sujeito da oração 'Choveu muito ontem'?\n");
    printf("a) sujeito simples\nb) sujeito composto\nc) sujeito inexistente\n");
    acertos += ler_resposta("c");

    // -------------------------------
    // Resultado final
    printf("🏁 Quiz finalizado!\n");
    printf("Você acertou %d de 10 perguntas.\n", acertos);

    if (acertos == 10) {
        printf("🥇 Excelente! Você gabaritou!\n");
    } else if (acertos >= 7) {
        printf("👏 Muito bom! Você tem um bom domínio.\n");
    } else if (acertos >= 4) {
        printf("🙂 Regular. Dá pra melhorar.\n");
    } else {
        printf("😕 Poucos acertos. Que tal revisar um pouco?\n");
    }

    return 0;
}