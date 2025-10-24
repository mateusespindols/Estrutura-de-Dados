import java.util.Random;
import java.util.Scanner;

public class AdivinhaNumero {
    public static void main(String[] args) {
        Random rand = new Random();
        int segredo = rand.nextInt(100) + 1; // número entre 1 e 100
        int chute;
        int tentativas = 0;

        Scanner scanner = new Scanner(System.in);
        System.out.println("🎲 Adivinhe o número entre 1 e 100!");

        do {
            System.out.print("Digite seu palpite: ");

            // Verifica se a entrada é um número válido
            while (!scanner.hasNextInt()) {
                System.out.println("Por favor, digite um número válido!");
                scanner.next(); // descarta a entrada inválida
                System.out.print("Digite seu palpite: ");
            }

            chute = scanner.nextInt();
            tentativas++;

            if (chute > segredo)
                System.out.println("Muito alto!");
            else if (chute < segredo)
                System.out.println("Muito baixo!");
            else
                System.out.println("🎉 Acertou em " + tentativas + " tentativas!");

        } while (chute != segredo);

        scanner.close();
    }
}
