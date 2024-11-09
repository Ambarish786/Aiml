import java.util.*;

class statements{
    public static void main(String[] args) {
        try(Scanner sc= new Scanner(System.in)){
            int age = sc.nextInt();
            if(age >= 18){
                System.out.print("Adult");
            }
            else{
                System.out.print("Child");
            }
        }
    }
}