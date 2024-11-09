import java.util.*;

class Functions{
    // public static void print(String name) {
    //     System.out.println(name);
    // }

    // public static void main(String[] args) {
    //     try(Scanner sc = new Scanner(System.in)) {
    //     System.out.print("Enter NAme: ");
    //     String M = sc.next();
    //     print(M);
    //     }
    // }

    // public static int Add(int a, int b) {
    //     int sum = a + b;
    //     return sum;
    // }

    // public static void main(String[] args) {
    //     try(Scanner sc = new Scanner(System.in)) {
    //         int a = sc.nextInt();
    //         int b = sc.nextInt();
    //         int sum =  Add(a,b);
    //         System.out.println(sum);
    //     }
    // }

//     public static int Multiply(int a,int b) {
//         int x = a * b;
//         return  x;
//     }

//     public static void  main(String[] args) {
//         try(Scanner sc = new Scanner(System.in)) {
//             int a = sc.nextInt();
//             int b = sc.nextInt();
//             int x = Multiply(a, b);
//            System.out.println(x);
//        }
//    }

//         public static int fact(int n) {
//             if(n<0) {
//                 System.out.println("Invalid");
//                 return 0;
//             }
//             int factorial = 1;

//             for(int i = n;i>=1;i--) {
//                 factorial = factorial * i;
//             }

//             return factorial;
//         }

//         public static void main(String[] args) {
//             try(Scanner sc = new Scanner(System.in)) {
//                 int n = sc.nextInt();
//                 int x = fact(n);
//                 System.out.println(x);
//             }
//         }
// }

//         public static int gcd(int n1,int n2) {
//             int num = 1;
//             for(int i = 1;i<=Math.max(n1,n2);i++) {
//                    if(n1 % i == 0 && n2 % i == 0) {
//                     num = i;
//                 }
//             }
//             return  num;
// }

//         public static void main(String[] args) {
//             try(Scanner sc = new Scanner(System.in)) {
//                 int n1 = sc.nextInt();
//                 int n2 = sc.nextInt();
//                 int a = gcd(n1, n2);
//                 System.out.println(a);
//         }
//     }
// }

            public static void Fibonacci(int n) {

                int a = 0;
                int b = 1;
//		        System.out.println(a);
//		        System.out.println(b);
                for(int i=0; i<=n; i++) {

                    System.out.println(a);
                    int c = a + b;
                    a = b;
                    b = c;
    }
}

            public static void main(String[] args) {
                try(Scanner sc = new Scanner(System.in)) {
		        System.out.println("Enter the number of inputs: ");
		        int N = sc.nextInt();
		
		        Fibonacci(N);
            }
        }
    }