#include <stdio.h>

int main() {
    int a=5;
    int b=6;
    int c=7;
    int t=0;

    t=a;
    a=c;
    c=b;
    b=t;

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}