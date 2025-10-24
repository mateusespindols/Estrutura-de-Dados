using System;              // Para Console, String
using System.Globalization; // Para cultura (caso queira acentos corretos)
using System.Linq;         // Para métodos LINQ, como Trim() + manipulação
using System.Text;         // Para Encoding, se precisar tratar caracteres especiais

class QuizPortugues
{
    // ---------------------------------------------
    // Função para converter uma string para minúsculas
    // Usamos ToLowerInvariant() para garantir que funcione corretamente
    // independente da cultura/localização do sistema.
    static string ParaMinusculo(string str)
    {
        return str.ToLowerInvariant();
    }

    // ---------------------------------------------
    // Função que lê a resposta do usuário, trata entrada em branco,
    // converte para minúscula e compara com a resposta correta.
    // Retorna true se a resposta estiver correta, false caso contrário.
    static bool LerResposta(string correta)
    {
        Console.Write("👉 Sua resposta: ");

        // Lê a linha digitada pelo usuário
        string resposta = Console.ReadLine();

        // Se o usuário der EOF (Ctrl+Z/Ctrl+D) ou nada for digitado → tratamos como em branco
        if (resposta == null)
        {
            Console.WriteLine("⚠️ Resposta em branco. Contado como erro.\n");
            return false;
        }

        // Remove espaços no início e no final da resposta
        resposta = resposta.Trim();

        // Converte para minúsculas para comparar sem considerar letras maiúsculas/minúsculas
        resposta = ParaMinusculo(resposta);

        // Verifica se a resposta ficou vazia após o trim
        if (resposta == "")
        {
            Console.WriteLine("⚠️ Resposta em branco. Contado como erro.\n");
            return false;
        }

        // Compara com a resposta correta
        if (resposta == correta)
        {
            Console.WriteLine("✅ Correto!\n");
            return true;
        }
        else
        {
            Console.WriteLine($"❌ Errado. Resposta correta: {correta}\n");
            return false;
        }
    }

    // ---------------------------------------------
    // Função principal
    static void Main()
    {
        // Garante que acentuação seja exibida corretamente no console do Windows
        Console.OutputEncoding = Encoding.UTF8;

        int acertos = 0; // Contador de acertos

        // ---------------------------------------------
        // Perguntas do quiz
        Console.WriteLine("1) Qual é o plural de 'cidadão'?");
        if (LerResposta("cidadãos")) acertos++;

        Console.WriteLine("2) Qual palavra está escrita corretamente?");
        Console.WriteLine("a) exceção\nb) exessão\nc) eceção");
        if (LerResposta("a")) acertos++;

        Console.WriteLine("3) Qual é a forma correta da concordância?");
        Console.WriteLine("a) Faltam entregar os documentos.\nb) Faltam entregar o documentos.");
        if (LerResposta("a")) acertos++;

        Console.WriteLine("4) Identifique a função da palavra 'feliz' na frase 'Ela voltou feliz'.");
        Console.WriteLine("a) Substantivo\nb) Adjetivo\nc) Verbo");
        if (LerResposta("b")) acertos++;

        Console.WriteLine("5) Qual alternativa apresenta uma oração subordinada adverbial causal?");
        Console.WriteLine("a) Cheguei cedo para não perder o ônibus.");
        Console.WriteLine("b) Não fui à escola porque estava doente.");
        Console.WriteLine("c) Se chover, não sairei.");
        if (LerResposta("b")) acertos++;

        Console.WriteLine("6) Assinale a frase em que a colocação pronominal está correta:");
        Console.WriteLine("a) Me empresta seu livro.");
        Console.WriteLine("b) Empresta-me seu livro.");
        Console.WriteLine("c) Seu livro me empresta.");
        if (LerResposta("b")) acertos++;

        Console.WriteLine("7) Qual das palavras abaixo está acentuada corretamente?");
        Console.WriteLine("a) Idéia\nb) Heroi\nc) Pôde");
        if (LerResposta("c")) acertos++;

        Console.WriteLine("8) Qual é a classe gramatical da palavra 'ontem'?");
        Console.WriteLine("a) Substantivo\nb) Advérbio\nc) Adjetivo");
        if (LerResposta("b")) acertos++;

        Console.WriteLine("9) Qual oração apresenta voz passiva?");
        Console.WriteLine("a) Os alunos fizeram a tarefa.");
        Console.WriteLine("b) A tarefa foi feita pelos alunos.");
        Console.WriteLine("c) Eles farão a tarefa amanhã.");
        if (LerResposta("b")) acertos++;

        Console.WriteLine("10) Qual é o sujeito da oração 'Choveu muito ontem'?");
        Console.WriteLine("a) sujeito simples\nb) sujeito composto\nc) sujeito inexistente");
        if (LerResposta("c")) acertos++;

        // ---------------------------------------------
        // Resultado final
        Console.WriteLine("🏁 Quiz finalizado!");
        Console.WriteLine($"Você acertou {acertos} de 10 perguntas.");

        // Uso de operadores relacionais:
        // == → verifica se acertos é igual a 10
        // >= → verifica se acertos é maior ou igual a 7 ou 4
        if (acertos == 10)
        {
            Console.WriteLine("🥇 Excelente! Você gabaritou!");
        }
        else if (acertos >= 7)
        {
            Console.WriteLine("👏 Muito bom! Você tem um bom domínio.");
        }
        else if (acertos >= 4)
        {
            Console.WriteLine("🙂 Regular. Dá pra melhorar.");
        }
        else
        {
            Console.WriteLine("😕 Poucos acertos. Que tal revisar um pouco?");
        }

        // Aguarda tecla para encerrar (opcional em modo Console)
        // Console.ReadKey();
    }
}
