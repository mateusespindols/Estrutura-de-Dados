using System;

class Program
{
    static void Main()
    {
        Random rand = new Random();
        int segredo = rand.Next(1, 101); // número entre 1 e 100
        int chute;
        int tentativas = 0;

        Console.WriteLine("🎲 Adivinhe o número entre 1 e 100!");

        do
        {
            Console.Write("Digite seu palpite: ");
            string entrada = Console.ReadLine();

            // Tenta converter a entrada para inteiro
            if (!int.TryParse(entrada, out chute))
            {
                Console.WriteLine("Por favor, digite um número válido!");
                continue;
            }

            tentativas++;

            if (chute > segredo)
                Console.WriteLine("Muito alto!");
            else if (chute < segredo)
                Console.WriteLine("Muito baixo!");
            else
                Console.WriteLine($"🎉 Acertou em {tentativas} tentativas!");

        } while (chute != segredo);
    }
}
