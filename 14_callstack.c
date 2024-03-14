#include <stdio.h>

// Demonstrating how memory allocated to functions are deallocated after execution

void printHello(){
    printf("Hello World\n");
}

int* Add(int *a, int *b){
    int c = (*a) + (*b);
    return &c;
}

int main(){
    int a = 2;
    int b = 4;
    int *ptr = Add(&a, &b);
    printHello();

    // Will print either some garbage value or nothing because memory allocated for Add has been deallocated
    printf("%d\n", *ptr);

    return 0;
}