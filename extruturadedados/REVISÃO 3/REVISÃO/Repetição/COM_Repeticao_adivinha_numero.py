import random


segredo = random.randint(1, 100)
tentativas = 0

print("🎲 Adivinhe o número entre 1 e 100!")

while True:
    chute = int(input("Digite seu palpite: "))
    tentativas += 1

    if chute > segredo:
        print("Muito alto!\n")
    elif chute < segredo:
        print("Muito baixo!\n")
    else:
        print(f"🎉 Acertou em {tentativas} tentativas!")
        break
