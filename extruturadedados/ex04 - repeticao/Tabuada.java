import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Digite a tabuada a ser imprimida: \n");
    int x = input.nextInt();

      for (int i = 0; i <= 10; i++) {
            int r = x*i; 
            System.out.println(x + " x " + i + " = " + r);
        }
    }
}
