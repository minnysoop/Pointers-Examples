#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    printf("sizeof(a) = %d bytes\n", sizeof(a));
    printf("p = %p\n", p);
    printf("p + 1 = %p\n", p+1);
    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p+1));
    return 0;
}