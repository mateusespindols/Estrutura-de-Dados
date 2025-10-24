# Quiz de Língua Portuguesa (seguro contra EOF no OneCompiler)
import sys

# ------ Pré-carrega toda a entrada (incluindo linhas vazias)
_raw = sys.stdin.read().split('\n')  # split('\n') preserva linhas vazias
_inputs = iter(_raw)                 # iterator para consumir linhas

def _next_input(prompt='👉 Sua resposta: '):
    """
    Retorna a próxima linha do input pré-carregado.
    - Se não houver input pré-carregado e estivermos no terminal (isatty), usa input().
    - Se o iterador acabar, retorna string vazia (tratada como resposta em branco).
    """
    # Caso comum: não há nada no stdin pré-carregado (ex: raw == [''])
    if len(_raw) == 1 and _raw[0] == '' and sys.stdin.isatty():
        # Estamos em terminal interativo -> fallback para input()
        try:
            return input(prompt)
        except EOFError:
            return ''  # trata EOF como vazio
    # Caso padrão: consome próxima linha do conteúdo pré-carregado
    try:
        return next(_inputs)
    except StopIteration:
        return ''  # sem mais linhas -> trata como resposta em branco

# Função que verifica resposta (usa _next_input em vez de input)
def ler_resposta(correta):
    """
    Lê a resposta do usuário com segurança.
    Retorna True se correta, False caso contrário (inclui branco/EOF).
    """
    resposta = _next_input("👉 Sua resposta: ").strip().lower()
    # resposta vazia (ou EOF tratado) = erro
    if resposta == "":
        print("⚠️ Resposta em branco. Contado como erro.\n")
        return False
    elif resposta == correta:
        print("✅ Correto!\n")
        return True
    else:
        print(f"❌ Errado. Resposta correta: {correta}\n")
        return False

# -------------------------------
# Quiz - perguntas (usando ler_resposta)
acertos = 0

print("1) Qual é o plural de 'cidadão'?")
if ler_resposta("cidadãos"):
    acertos += 1

print("2) Qual palavra está escrita corretamente?")
print("a) exceção\nb) exessão\nc) eceção")
if ler_resposta("a"):
    acertos += 1

print("3) Qual é a forma correta da concordância?")
print("a) Faltam entregar os documentos.\nb) Faltam entregar o documentos.")
if ler_resposta("a"):
    acertos += 1

print("4) Identifique a função da palavra 'feliz' na frase 'Ela voltou feliz'.")
print("a) Substantivo\nb) Adjetivo\nc) Verbo")
if ler_resposta("b"):
    acertos += 1

print("5) Qual alternativa apresenta uma oração subordinada adverbial causal?")
print("a) Cheguei cedo para não perder o ônibus.")
print("b) Não fui à escola porque estava doente.")
print("c) Se chover, não sairei.")
if ler_resposta("b"):
    acertos += 1

print("6) Assinale a frase em que a colocação pronominal está correta:")
print("a) Me empresta seu livro.")
print("b) Empresta-me seu livro.")
print("c) Seu livro me empresta.")
if ler_resposta("b"):
    acertos += 1

print("7) Qual das palavras abaixo está acentuada corretamente?")
print("a) Idéia\nb) Heroi\nc) Pôde")
if ler_resposta("c"):
    acertos += 1

print("8) Qual é a classe gramatical da palavra 'ontem'?")
print("a) Substantivo\nb) Advérbio\nc) Adjetivo")
if ler_resposta("b"):
    acertos += 1

print("9) Qual oração apresenta voz passiva?")
print("a) Os alunos fizeram a tarefa.")
print("b) A tarefa foi feita pelos alunos.")
print("c) Eles farão a tarefa amanhã.")
if ler_resposta("b"):
    acertos += 1

print("10) Qual é o sujeito da oração 'Choveu muito ontem'?")
print("a) sujeito simples\nb) sujeito composto\nc) sujeito inexistente")
if ler_resposta("c"):
    acertos += 1

# Resultado final
print("🏁 Quiz finalizado!")
print(f"Você acertou {acertos} de 10 perguntas.")

if acertos == 10:
    print("🥇 Excelente! Você gabaritou!")
elif acertos >= 7:
    print("👏 Muito bom! Você tem um bom domínio.")
elif acertos >= 4:
    print("🙂 Regular. Dá pra melhorar.")
else:
    print("😕 Poucos acertos. Que tal revisar um pouco?")
