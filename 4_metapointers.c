#include <stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("%p -> %p -> %p -> %d\n", r, q, p, a);
    printf("Dereferencing above statement\n");
    printf("%d -> %d -> %d -> %d\n", *(*(*r)), *(*q), *p, a);

    return 0;
}