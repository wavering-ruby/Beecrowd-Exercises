import java.io.IOException;
import java.util.Scanner;

public class Ex1001 { // Lembre-se de manter em Main para enviar no beecrowd.
    public static void main(String[] args) throws IOException {       
        Scanner s = new Scanner(System.in);
        
        int A = s.nextInt();
        int B = s.nextInt();

        s.close();

        int X = A + B;

        System.out.println("X = " + X);
    }
}