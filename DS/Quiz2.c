// #include<stdio.h>
// int main() {

// for( i=0; i>0;i++) {
//     printf(" I LOVE YOU !!!");
// }
// }
// int func(int n) {
//     if(n == 4)
//     return n ;
//     return 2*func(n+1);
// }

// int main() {
//     printf("%d",func(2));
//     return 0;
// }
// #include<stdio.h>

// 2.. void print(int n) {
//     if(n < 0)
//     return;
//     printf("%d", n);
//     print(n-1);
//     printf("%d", n);
// }

// int main() {
//     print(3);
//     return 0;
//}
//3... #include<stdio.h>

// void func(int n) {
//     if (n == 0)
//     return;
//     func(n/2);
//     printf("%d",n % 2);
// }

// int main() {
//     func(10);
//     return 0;
// }
//4... #include<stdio.h>

// int func(int n) {
//     if(n <= 1)
//     return 1;
//     return func(n - 2) + func(n - 3);
// }

// int main() {
//     int x = func(10);
//     printf("%d",x);
// }
//5... #include<stdio.h>

// void func(int n) {
//     if(n <= 0)
//     return;
//     printf("%d", n);
//     func(n - 2);
//     printf("%d", n);
// }

// int main() {
//     func(5);
//     return 0;
// }
//6... #include<stdio.h>

// int func(int n) {
//     if (n <= 1)
//     return n;
//     return func(n - 1) + func(n - 2);
// }

// int main() {
//     printf("%d", func(6));
//     return 0;
// }
// 7... #include<stdio.h>

// int func(int n) {
//     if(n <= 1)
//     return n;
//     return 2 * func(n - 1);
// }

// int main() {
//     printf("%d", func(5));
//     return 0;
// }
//8... #include<stdio.h>

// int func(int n) {
//     if(n == 0)
//     return 0;
//     return 1 + func(n/10);
// }

// int main() {
//     printf("%d", func(12345));
//     return 0;
// }
//9... #include<stdio.h>

// int func(int n) {
//     if(n == 1)
//     return 1;
//     if(n % 2 == 0)
//     return func(n/2);
//     else
//     return func(3 * n+1);
// }

// int main() {
//     int a;
//     a = func(6);
//     printf("%d", a);
// }
// 10...#include<stdio.h>

//  int permutation(int n , int r) {
//     if(r == 0) {
//         return 1;
//     }
//     return n * permutation(n - 1,r - 1);
// }

// int main() {
//     int a = permutation(5,3);
//     printf("%d",a);
// }
// Name : Ch.Ambarish
// Roll :100523729013
