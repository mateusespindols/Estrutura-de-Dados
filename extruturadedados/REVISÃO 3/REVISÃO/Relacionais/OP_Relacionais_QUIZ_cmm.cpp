#include <iostream>   // Para cout e cin
#include <string>     // Para usar a classe std::string
#include <algorithm>  // Para std::transform
using namespace std;

// -------------------------------
// Função para transformar uma string em minúsculas
// Isso facilita a comparação das respostas, tornando-a case-insensitive
string paraMinusculo(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// -------------------------------
// Função que lê a resposta do usuário e verifica se está correta
// - Recebe a resposta correta como parâmetro
// - Retorna true se o usuário acertou, false caso contrário
// - Inclui tratamento para resposta em branco
bool lerResposta(const string& correta) {
    string resposta;

    // Prompt para o usuário digitar a resposta
    cout << "👉 Sua resposta: ";
    if (!getline(cin, resposta)) { 
        // Se getline falhar (EOF ou erro), tratamos como resposta em branco
        cout << "⚠️ Resposta em branco. Contado como erro.\n\n";
        return false;
    }

    // Remove espaços extras no início e no fim (trim)
    size_t start = resposta.find_first_not_of(" \t");
    size_t end = resposta.find_last_not_of(" \t");
    if (start == string::npos) resposta = ""; // string só com espaços
    else resposta = resposta.substr(start, end - start + 1);

    // Converte para minúsculas para comparação case-insensitive
    resposta = paraMinusculo(resposta);

    // Verifica se a resposta está em branco
    if (resposta.empty()) {
        cout << "⚠️ Resposta em branco. Contado como erro.\n\n";
        return false;
    }

    // Compara a resposta do usuário com a resposta correta
    if (resposta == correta) {
        cout << "✅ Correto!\n\n";
        return true;
    } else {
        cout << "❌ Errado. Resposta correta: " << correta << "\n\n";
        return false;
    }
}

// -------------------------------
// Função principal
int main() {
    int acertos = 0; // Contador de acertos do usuário

    // -------------------------------
    // Perguntas do quiz
    cout << "1) Qual é o plural de 'cidadão'?\n";
    if (lerResposta("cidadãos")) acertos++; // Incrementa acertos se correto

    cout << "2) Qual palavra está escrita corretamente?\n";
    cout << "a) exceção\nb) exessão\nc) eceção\n";
    if (lerResposta("a")) acertos++;

    cout << "3) Qual é a forma correta da concordância?\n";
    cout << "a) Faltam entregar os documentos.\nb) Faltam entregar o documentos.\n";
    if (lerResposta("a")) acertos++;

    cout << "4) Identifique a função da palavra 'feliz' na frase 'Ela voltou feliz'.\n";
    cout << "a) Substantivo\nb) Adjetivo\nc) Verbo\n";
    if (lerResposta("b")) acertos++;

    cout << "5) Qual alternativa apresenta uma oração subordinada adverbial causal?\n";
    cout << "a) Cheguei cedo para não perder o ônibus.\n";
    cout << "b) Não fui à escola porque estava doente.\n";
    cout << "c) Se chover, não sairei.\n";
    if (lerResposta("b")) acertos++;

    cout << "6) Assinale a frase em que a colocação pronominal está correta:\n";
    cout << "a) Me empresta seu livro.\n";
    cout << "b) Empresta-me seu livro.\n";
    cout << "c) Seu livro me empresta.\n";
    if (lerResposta("b")) acertos++;

    cout << "7) Qual das palavras abaixo está acentuada corretamente?\n";
    cout << "a) Idéia\nb) Heroi\nc) Pôde\n";
    if (lerResposta("c")) acertos++;

    cout << "8) Qual é a classe gramatical da palavra 'ontem'?\n";
    cout << "a) Substantivo\nb) Advérbio\nc) Adjetivo\n";
    if (lerResposta("b")) acertos++;

    cout << "9) Qual oração apresenta voz passiva?\n";
    cout << "a) Os alunos fizeram a tarefa.\n";
    cout << "b) A tarefa foi feita pelos alunos.\n";
    cout << "c) Eles farão a tarefa amanhã.\n";
    if (lerResposta("b")) acertos++;

    cout << "10) Qual é o sujeito da oração 'Choveu muito ontem'?\n";
    cout << "a) sujeito simples\nb) sujeito composto\nc) sujeito inexistente\n";
    if (lerResposta("c")) acertos++;

    // -------------------------------
    // Resultado final
    cout << "🏁 Quiz finalizado!\n";
    cout << "Você acertou " << acertos << " de 10 perguntas.\n";

    // Operadores relacionais usados aqui:
    // == compara igualdade
    // >= compara se é maior ou igual
    if (acertos == 10) {
        cout << "🥇 Excelente! Você gabaritou!\n";
    } else if (acertos >= 7) {
        cout << "👏 Muito bom! Você tem um bom domínio.\n";
    } else if (acertos >= 4) {
        cout << "🙂 Regular. Dá pra melhorar.\n";
    } else {
        cout << "😕 Poucos acertos. Que tal revisar um pouco?\n";
    }

    return 0; // Fim do programa
}
