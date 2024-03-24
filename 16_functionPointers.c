#include<stdio.h>
#include <stdlib.h>

// Pointers that stores address of functions

// Things to Know
// When a function is executed, memory is allocated to it. Once finished, the memory is freed.
// Code in a function are stored in a contiguous block
// Pointers that store address of functions would store the first address of the block

int Add(int a, int b){
    return a+b;
}

int main(){
    int c;
    // Parenthesis contains the argument types and returns an int
    int (*p)(int,int);
    p = &Add;
    // To dereference and execute a function 
    c = (*p)(2,3); // p(2,3) also works
    printf("%d\n", c);

    return 0;
}
