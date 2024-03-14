#include <stdio.h>

void print(char* c){
    c[0] = 'A';
    while (*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main(){
    // Copies contents into an array
    char A[20] = "Hello";
    // Points to the first element of the string literal
    char* B = "Hello";
    print(A);
    print(B);
    return 0;
}