import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
   System.out.println("Digite o N na sequencia de finobacci: ");
      int N = input.nextInt();
      
    	int primeiro = 0;
    	int segundo = 1;
    	int proximo;
    	
    	for (int i = 1; i<=N; i++) {
    		 System.out.print(primeiro + " ");
    		 proximo = primeiro + segundo;
    		 primeiro = segundo; 
    		 segundo = proximo;
    	}
  }
}