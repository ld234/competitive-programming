import java.util.*;

public class FrogJumping {
    public static void main (String [] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        
        for (int t = 0 ; t < tc ; t++){
            long a = sc.nextInt();
            long b = sc.nextInt();
            long k = sc.nextInt();
            long diff = a - b;
            long result = 0;
            if (k % 2 == 1) {
                result = diff * (k/2) + a;
                
            } else {
                result = diff * (k/2);
            }
            System.out.println(result);
        }
    }
}
