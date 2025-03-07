import java.io.IOException;
import java.util.Scanner;

public class Ex1016 {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        
        String n = s.nextLine();
        
        s.close();

        int m = Integer.parseInt(n);
        
        System.out.println(Integer.toString(m * 2)+ " minutos");
    }
}