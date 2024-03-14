#include <stdio.h>

int main(){
    int a = 5;
    int *pa = &a;
    printf("pa -> %p\n", pa);
    printf("&a -> %p\n", &a);
    printf("a -> %d\n", a);
    printf("*pa -> %d\n", *pa);
    return 0;
}