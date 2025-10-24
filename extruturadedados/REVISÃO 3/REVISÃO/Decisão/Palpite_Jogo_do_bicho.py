import random

bichos = [
    "Avestruz", "Águia", "Burro", "Borboleta", "Cachorro",
    "Cabra", "Carneiro", "Camelo", "Cobra", "Coelho",
    "Cavalo", "Elefante", "Galo", "Gato", "Jacaré",
    "Leão", "Macaco", "Porco", "Pavão", "Peru",
    "Touro", "Tigre", "Urso", "Veado", "Vaca"
]

def gerar_palpite():
    numero = random.randint(0, 9999)  
    dois_ultimos = numero % 100
    grupo = (dois_ultimos // 4) % 25
    bicho = bichos[grupo]
    
    print(f"Número: {numero:04d}")
    print(f"Bicho: {bicho}")
    print(f"Grupo: {grupo + 1}")

def analisar_numero():
    try:
        numero = int(input("Digite um número (0000-9999): "))
        if 0 <= numero <= 9999:
            dois_ultimos = numero % 100
            grupo = (dois_ultimos // 4) % 25
            bicho = bichos[grupo]
            
            print(f"Número: {numero:04d}")
            print(f"Bicho: {bicho}")
            print(f"Grupo: {grupo + 1}")
        else:
            print("Número inválido! Digite entre 0000 e 9999.")
    except ValueError:
        print("Número inválido!")

def main():
    print("GERADOR DE PALPITES - JOGO DO BICHO")
    
    while True:
        print("\n1 - Gerar palpite")
        print("2 - Analisar número")
        print("3 - Sair")
        opcao = input("Escolha: ")
        
        if opcao == "1":
            gerar_palpite()
        elif opcao == "2":
            analisar_numero()
        elif opcao == "3":
            print("Até mais!")
            break
        else:
            print("Opção inválida!")

if __name__ == "__main__":
    main()