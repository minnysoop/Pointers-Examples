#include <stdio.h>

int main(){
    int a = 5;
    int *p = &a;

    void *p0 = p;

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("p0 = %p\n", p0); // Can't dereference p0

    return 0;
}