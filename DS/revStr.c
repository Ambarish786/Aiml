#include<stdio.h>
#include<string.h>

void Reverse(char *s) {
    if (*s != "\0") {
    Reverse( s + 1);
    printf("%c" , *s);
}
}

int main() {
    char s[]  = " Ambarish";
    Reverse(s);
    printf("/n");
    return 0;
}
