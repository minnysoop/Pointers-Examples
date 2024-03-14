#include <stdio.h>
#include <stdlib.h>

void printHello(){
    printf("Hello World\n");
}

int* Add(int *a, int *b){
    // Everything allocated in the heap has to be explicitly deallocated
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main(){
    int a = 2;
    int b = 4;
    int *ptr = Add(&a, &b);
    printHello();
    printf("%d\n", *ptr);

    free(ptr);
    return 0;
}