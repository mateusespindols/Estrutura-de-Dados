import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String senhaCorreta = "1234";
        String senhaDigitada = "";

        while (!senhaDigitada.equals(senhaCorreta)) {
            System.out.print("Digite a senha: ");
            senhaDigitada = input.nextLine();

            if (!senhaDigitada.equals(senhaCorreta)) {
                System.out.println("❌ Senha incorreta!");
            }
        }

        System.out.println("✅ Senha correta!");
    }
}
