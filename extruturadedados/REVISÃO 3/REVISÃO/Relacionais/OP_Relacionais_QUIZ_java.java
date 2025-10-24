import java.util.Scanner;

public class QuizPortugues {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Scanner para ler entrada do usuário
        int acertos = 0; // Contador de respostas corretas

        // Função para ler resposta com segurança
        // Retorna true se a resposta estiver correta, false caso contrário
        // Inclui tratamento de respostas em branco
        java.util.function.BiFunction<String, String, Boolean> lerResposta = (correta, prompt) -> {
            System.out.print(prompt);
            String resposta = scanner.nextLine().trim().toLowerCase(); // Lê e padroniza a resposta
            if (resposta.equals("")) {
                System.out.println("⚠️ Resposta em branco. Contado como erro.\n");
                return false;
            } else if (resposta.equals(correta)) {
                System.out.println("✅ Correto!\n");
                return true;
            } else {
                System.out.println("❌ Errado. Resposta correta: " + correta + "\n");
                return false;
            }
        };

        // -------------------------------
        // Quiz - Perguntas
        System.out.println("1) Qual é o plural de 'cidadão'?");
        if (lerResposta.apply("cidadãos", "👉 Sua resposta: ")) acertos++;

        System.out.println("2) Qual palavra está escrita corretamente?");
        System.out.println("a) exceção\nb) exessão\nc) eceção");
        if (lerResposta.apply("a", "👉 Sua resposta: ")) acertos++;

        System.out.println("3) Qual é a forma correta da concordância?");
        System.out.println("a) Faltam entregar os documentos.\nb) Faltam entregar o documentos.");
        if (lerResposta.apply("a", "👉 Sua resposta: ")) acertos++;

        System.out.println("4) Identifique a função da palavra 'feliz' na frase 'Ela voltou feliz'.");
        System.out.println("a) Substantivo\nb) Adjetivo\nc) Verbo");
        if (lerResposta.apply("b", "👉 Sua resposta: ")) acertos++;

        System.out.println("5) Qual alternativa apresenta uma oração subordinada adverbial causal?");
        System.out.println("a) Cheguei cedo para não perder o ônibus.");
        System.out.println("b) Não fui à escola porque estava doente.");
        System.out.println("c) Se chover, não sairei.");
        if (lerResposta.apply("b", "👉 Sua resposta: ")) acertos++;

        System.out.println("6) Assinale a frase em que a colocação pronominal está correta:");
        System.out.println("a) Me empresta seu livro.");
        System.out.println("b) Empresta-me seu livro.");
        System.out.println("c) Seu livro me empresta.");
        if (lerResposta.apply("b", "👉 Sua resposta: ")) acertos++;

        System.out.println("7) Qual das palavras abaixo está acentuada corretamente?");
        System.out.println("a) Idéia\nb) Heroi\nc) Pôde");
        if (lerResposta.apply("c", "👉 Sua resposta: ")) acertos++;

        System.out.println("8) Qual é a classe gramatical da palavra 'ontem'?");
        System.out.println("a) Substantivo\nb) Advérbio\nc) Adjetivo");
        if (lerResposta.apply("b", "👉 Sua resposta: ")) acertos++;

        System.out.println("9) Qual oração apresenta voz passiva?");
        System.out.println("a) Os alunos fizeram a tarefa.");
        System.out.println("b) A tarefa foi feita pelos alunos.");
        System.out.println("c) Eles farão a tarefa amanhã.");
        if (lerResposta.apply("b", "👉 Sua resposta: ")) acertos++;

        System.out.println("10) Qual é o sujeito da oração 'Choveu muito ontem'?");
        System.out.println("a) sujeito simples\nb) sujeito composto\nc) sujeito inexistente");
        if (lerResposta.apply("c", "👉 Sua resposta: ")) acertos++;

        // -------------------------------
        // Resultado final
        System.out.println("🏁 Quiz finalizado!");
        System.out.println("Você acertou " + acertos + " de 10 perguntas.");

        if (acertos == 10) {
            System.out.println("🥇 Excelente! Você gabaritou!");
        } else if (acertos >= 7) {
            System.out.println("👏 Muito bom! Você tem um bom domínio.");
        } else if (acertos >= 4) {
            System.out.println("🙂 Regular. Dá pra melhorar.");
        } else {
            System.out.println("😕 Poucos acertos. Que tal revisar um pouco?");
        }

        scanner.close(); // Fecha o scanner
    }
}
