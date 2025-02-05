import java.io.IOException;
import java.util.Scanner;

public class 1930 {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);

        int cont = 0;
        int soma = 0;
        
        String v = s.nextLine();
        
        s.close();
        
        for(int i = 0; i < v.length(); i++){
            char c = v.charAt(i);
            
            if(c != ' '){
                soma = soma + (c - '0');
                cont++;
            }
        }
        
        System.out.println(soma - (cont - 1));
    
    }
}