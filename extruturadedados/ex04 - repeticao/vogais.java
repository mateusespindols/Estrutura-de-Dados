import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma palavra: ");
        String palavra = input.nextLine();

        int contadorVogais = 0;
        String vogais = "aeiouAEIOU";

        for (int i = 0; i < palavra.length(); i++) {
            String letra = palavra.substring(i, i+1); 
            if (vogais.contains(letra)) {
                contadorVogais++;
            }
        }

        System.out.println("Total de vogais: " + contadorVogais);
    }
}
