import java.util.*;

public class Main {
    public static void main(String[] args) {
        System.out.println("Digite sua senha:");

        Scanner teclado = new Scanner(System.in);
        String s = teclado.nextLine();

        if (s.equals("Admin123")) {
            System.out.println("✅ Bem-vindo, Administrador!");
        } else if (s.equals("User123")) {
            System.out.println("✅ Bem-vindo, Usuário!");
        } else {
            System.out.println("❌ Código incorreto");
        }

       
    }
}
