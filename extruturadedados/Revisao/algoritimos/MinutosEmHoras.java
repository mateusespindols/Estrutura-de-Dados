import java.util.*;

public class Main {
    public static void main(String[] args) {
    
      Scanner input = new Scanner(System.in);
      System.out.println("Digite a quantidade de minutos");
        int minutos = input.nextInt();
        int  horas, resto;
      
      horas = minutos / 60;
      resto = minutos % 60;
      
       System.out.println(horas+ " hora(s) e "+resto+" minuto(s)");
  }
}