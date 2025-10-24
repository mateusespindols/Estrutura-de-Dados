import java.util.Random;
import java.util.Scanner;

public class Palpite_Jogo_do_bicho {
    
    public static void main(String[] args) {
        String[] bichos = {
            "Avestruz", "Águia", "Burro", "Borboleta", "Cachorro",
            "Cabra", "Carneiro", "Camelo", "Cobra", "Coelho",
            "Cavalo", "Elefante", "Galo", "Gato", "Jacaré",
            "Leão", "Macaco", "Porco", "Pavão", "Peru",
            "Touro", "Tigre", "Urso", "Veado", "Vaca"
        };

        System.out.println("GERADOR DE PALPITES - JOGO DO BICHO");
        
        try (Scanner scanner = new Scanner(System.in)) {
            OUTER:
            while (true) {
                System.out.println("\n1 - Gerar palpite");
                System.out.println("2 - Analisar número");
                System.out.println("3 - Sair");
                System.out.print("Escolha: ");
                String opcao = scanner.nextLine();
                switch (opcao) {
                    case "1" -> gerarPalpite(bichos);
                    case "2" -> analisarNumero(bichos, scanner);
                    case "3" -> {
                        System.out.println("Até mais!");
                        break OUTER;
                    }
                    default -> System.out.println("Opção inválida!");
                }
            }
        }
    }
    
    static void gerarPalpite(String[] bichos) {
        Random random = new Random();
        int numero = random.nextInt(10000);
        
        int doisUltimos = numero % 100;
        int grupo = (doisUltimos / 4) % 25;
        String bicho = bichos[grupo];
        
        System.out.printf("Número: %04d\n", numero);
        System.out.println("Bicho: " + bicho);
        System.out.println("Grupo: " + (grupo + 1));
    }
    
    static void analisarNumero(String[] bichos, Scanner scanner) {
        System.out.print("Digite um número (0000-9999): ");
        String input = scanner.nextLine();
        
        try {
            int numero = Integer.parseInt(input);
            if (numero >= 0 && numero <= 9999) {
                int doisUltimos = numero % 100;
                int grupo = (doisUltimos / 4) % 25;
                String bicho = bichos[grupo];
                
                System.out.printf("Número: %04d\n", numero);
                System.out.println("Bicho: " + bicho);
                System.out.println("Grupo: " + (grupo + 1));
            } else {
                System.out.println("Número inválido! Digite entre 0000 e 9999.");
            }
        } catch (NumberFormatException e) {
            System.out.println("Número inválido!");
        }
    }
}