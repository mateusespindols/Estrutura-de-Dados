import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Digite um número: \n");
        int x = input.nextInt();

      
        while (x >= 0) {
            System.out.print(x + " ");
            x--; 
        }
    }
}
