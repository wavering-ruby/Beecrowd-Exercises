import java.io.IOException;
import java.util.Scanner;

public class Ex1017 {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        
        String n = s.nextLine();
        String m = s.nextLine();
        
        s.close();

        int t = Integer.parseInt(n);
        int vm = Integer.parseInt(m);
        
        System.out.println(String.format("%.3f", (t * vm) / 12.0));
    }
}