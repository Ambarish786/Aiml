//import java.util.*;
public class pattern {
    public static void main(String[] args) {
        int n = 4;
        // for(int i = 1; i<=4;i++) {
        //     for(int j = 1;j<5;j++) {
        //         System.out.print("*");           Solid rectangle
        //     }
        //     System.out.println("*");

        //    for(int i = 1; i<=4;i++) {
        //         for(int j = 1;j<=5;j++) {
        //             if( i == 1 || i == 4 || j == 1 || j == 5 ){
        //                 System.out.print("*");
        //             }
        //             else {                                     Hollow rectangle
        //                 System.out.print(" ");
        //             }
        //         }
        //             System.out.println();

        // }

        // for ( int i = 1; i <= 4;i++) {
        //     for(int j = 1;j<=i;j++) {
        //         System.out.print("*");
        //     }                                              Half pyramid
        //     System.out.println();
            
        // }

        // for(int i = 4; i>=1;i--) {
        //     for(int j = 1;j<=i;j++) {                   Inverted half pyramid
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        // for(int i = 1; i <= n; i++) {
        //     for(int j = 1;j <= n - i;j++) {
        //         System.out.print(" ");
        //     }
        //     for(int j = 1;j<=i;j++) {
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

    //     for(int i = 1;i<=n+1;i++) {
    //         for(int j = 1;j<=i;j++){
    //             System.out.print(j + " ");
    //         }  
    //         System.out.println();
    //   }

    // for(int i = 1;i<=n+1;i++) {
    //     for(int j = 1;j<= n-i+1;j++) {
    //         System.out.print(j);
    //     }
    //     System.out.println();
    // }

    // int num = 1;
    // for(int i = 1;i<=n+1;i++) {
    //     for(int j = 1;j<=i;j++) {
    //         System.out.print(num + " ");               Floyd's triangle
    //         num++;
    //     }
    //     System.out.println();
    // }

    // for(int i = 1;i<=n+1;i++) {
    //     for(int j = 1;j<=i;j++) {
    //         int sum = i+j;
    //         if(sum % 2 == 0) {
    //             System.out.print("1 ");
    //         }
    //         else{
    //             System.out.print("0 ");
    //         }
    //     }
    //     System.out.println();
    // }
        //Upper part
    for (int i = 1;i<=n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            System.out.print("*");
        }

        // Spaces
        int spaces = 2 *(n-1);
        for(int j = 1;j<=spaces;j++)
        {
            System.out.print(" ");
        }

        for(int j = 1;j<=i;j++)
        {
            System.out.print(" ");
        }
        System.out.println();
    }
        //Lower
        for (int i = n;i>=1;i--)
    {
        for(int j = 1;j <= i;j++)
        {
            System.out.print("*");
        }

        // Spaces
        int spaces = 2 *(n-1);
        for(int j = 1;j<=spaces;j++)
        {
            System.out.print(" ");
        }

        for(int j = 1;j<=i;j++)
        {
            System.out.print(" ");
        }
        System.out.println();
    }
        
        }
    }    
