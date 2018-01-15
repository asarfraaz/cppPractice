#include <stdio.h>

void f(int *a, int *b){
    int t;

    printf("a = %p\n", a); // address of x
    printf("b = %p\n", b); // address of y

    printf("*a = %d\n", *a); // x
    printf("*b = %d\n", *b); // y

    t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 10;
    int y = 25;
    int *ptr = &x;
    int *badp;

    int junk;
    printf("junk : %d\n", junk);

    printf("badp : %p\n", badp);
    printf("&badp : %p\n", &badp);

    //*badp = 100;
    //badp = (int *)0x7fff5eb8bb04;

    //printf("*badp : %d\n", *badp);

    printf("ptr : %p\n", ptr);
    printf("*ptr : %d\n", *ptr);
    printf("&ptr : %p\n", &ptr);

    printf("x = %d, &x = %p\n", x, &x);
    printf("y = %d, &y = %p\n", y, &y);
    printf("y = %d, *&y = %d\n", y, *&y);

    f(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
