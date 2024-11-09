import java.util.Scanner;

public class Arrays {
    public static void main(String[] args) {
    //     int[] marks = new int[3];
    //     marks[0] = 76;
    //     marks[2] = 43;
    //     marks[1] = 42;
    //     for(int i = 0; i<= marks.length;i++) {
    //         System.out.println(marks[i]);
    //     }
    // try(Scanner sc = new Scanner(System.in)) {
    //     System.out.println("Enter size : ");
    //     int size = sc.nextInt();
    //     int[] num = new int[size];
    //     System.out.println("Enter elements : ");
    //     for(int i = 0;i<size;i++) {
    //         num[i] = sc.nextInt();
    //     }
    //     System.out.println("Array : ");
    //     for(int i = 0;i<num.length;i++) {
    //         System.out.println(num[i]);
    //     }
    // }

    // try(Scanner sc = new Scanner(System.in)) {
    //          System.out.println("Enter size : ");
    //          int size = sc.nextInt();
    //          int[] num = new int[size];
    //          System.out.println("Enter elements : ");
    //          for(int i = 0;i<size;i++) {
    //              num[i] = sc.nextInt();
    //          }
    //          System.out.println("enter element to search: ");
    //          int x = sc.nextInt();
    //          for(int i = 0;i<num.length;i++) {
    //              if(num[i] == x) {
    //                 System.out.println("Element found at index: " + i);
    //              }
    //              else{
    //                 System.out.println("Not found");
    //              }
    //          }
    //         }
    //     }

//////////////   2-D


        try(Scanner sc = new Scanner(System.in)) {
            int rows = sc.nextInt();
            int colomns = sc.nextInt();
            int[][] matrix = new int[rows][colomns];
            System.out.println("Enter elements");

            for (int i = 0;i<rows;i++) {
                for(int j = 0;j<colomns;j++) {
                    matrix[i][j] = sc.nextInt();
                }
            }

            System.out.println("2-D array : ");
            for(int i = 0;i<rows;i++) {
                for(int j = 0;j<colomns;j++) {
                    System.out.print(matrix[i][j] + " ");
                }
                System.out.println();
            }
            System.out.println("Enter element to be found: ");
            int x = sc.nextInt();

            for(int i = 0;i<rows;i++) {
                for(int j = 0;j<colomns;j++) {
                    if(matrix[i][j] == x) {
                        System.out.println("x found at (" + i + ","  + j + ")");
                    }
                }            }             
            }
        }
    }