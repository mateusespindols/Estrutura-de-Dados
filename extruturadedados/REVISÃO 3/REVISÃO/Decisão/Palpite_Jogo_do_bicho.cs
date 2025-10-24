using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        string[] bichos = {
            "Avestruz", "Águia", "Burro", "Borboleta", "Cachorro",
            "Cabra", "Carneiro", "Camelo", "Cobra", "Coelho",
            "Cavalo", "Elefante", "Galo", "Gato", "Jacaré",
            "Leão", "Macaco", "Porco", "Pavão", "Peru",
            "Touro", "Tigre", "Urso", "Veado", "Vaca"
        };

        Console.WriteLine("GERADOR DE PALPITES - JOGO DO BICHO");
        
        while (true)
        {
            Console.WriteLine("\n1 - Gerar palpite");
            Console.WriteLine("2 - Analisar número");
            Console.WriteLine("3 - Sair");
            Console.Write("Escolha: ");
            
            string opcao = Console.ReadLine();
            
            if (opcao == "1")
            {
                GerarPalpite(bichos);
            }
            else if (opcao == "2")
            {
                AnalisarNumero(bichos);
            }
            else if (opcao == "3")
            {
                Console.WriteLine("Até mais!");
                break;
            }
            else
            {
                Console.WriteLine("Opção inválida!");
            }
        }
    }
    
    static void GerarPalpite(string[] bichos)
    {
        Random random = new Random();
        int numero = random.Next(0, 10000);
        
        int doisUltimos = numero % 100;
        int grupo = (doisUltimos / 4) % 25;
        string bicho = bichos[grupo];
        
        Console.WriteLine($"Número: {numero:0000}");
        Console.WriteLine($"Bicho: {bicho}");
        Console.WriteLine($"Grupo: {grupo + 1}");
    }
    
    static void AnalisarNumero(string[] bichos)
    {
        Console.Write("Digite um número (0000-9999): ");
        string input = Console.ReadLine();
        
        if (int.TryParse(input, out int numero) && numero >= 0 && numero <= 9999)
        {
            int doisUltimos = numero % 100;
            int grupo = (doisUltimos / 4) % 25;
            string bicho = bichos[grupo];
            
            Console.WriteLine($"Número: {numero:0000}");
            Console.WriteLine($"Bicho: {bicho}");
            Console.WriteLine($"Grupo: {grupo + 1}");
        }
        else
        {
            Console.WriteLine("Número inválido!");
        }
    }
}