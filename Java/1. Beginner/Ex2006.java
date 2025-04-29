import java.io.IOException;
import java.util.Scanner;

public class Ex2006 { // Lembre-se de manter em Main para enviar no beecrowd.
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        
        int t = s.nextInt();
        int cont = 0;
        int temp = 0;
        
        s.nextLine();
        
        String v = s.nextLine();
        
        // System.out.print(v.length());
        
        s.close();
        
        for(int i = 0; i < v.length(); i++){
            char c = v.charAt(i);
            
            if(c != ' '){
                
                // Tem duas maneiras para converter essa lógica, utilizando o - '0' ou transformar para String
                // A lógica do - '0' é porque estariamos subtraindo daquele valor 0 na tabela ASCII, já que o zero significaria estarmos estraíndo 48 do código da tabela ASCII daquele número e convertendo para inteiro. Por exemplo, '1' na tabela ASCII é o equivalente a 49, subtraindo 48 dessa função ele vira 1 inteiro e não mais 49.
                temp = c - '0';
                
                // Também temos a lógica de converter de char para string e depois para int
                // temp = Integer.parseInt(String.valueOf(c));
                
                if(temp == t){
                    cont++;
                }
            }
        }
        
        System.out.println(cont);
    
    }
}