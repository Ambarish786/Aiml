
import java.util.*;

public class strings {
    public static void main(strings[] args) {
        try(Scanner sc = new  Scanner(System.in)) {
            String name = sc.next();
            
            for(int i = 0;i<name.length();i++) {
                System.out.println(name.charAt(i));
            }
        }
    }
}
