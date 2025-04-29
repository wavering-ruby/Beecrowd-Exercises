import java.io.IOException;
import java.util.Scanner;

public class Ex1153 {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        
        String n = s.nextLine();
        
        s.close();

        int m = Integer.parseInt(n);
        
        m = fatorial(m);
        
        System.out.println(m);
    }

    public static int fatorial(int n){
        if(n > 1){
            return n * fatorial(n - 1);
        } else {
            return n;
        }
    }
}