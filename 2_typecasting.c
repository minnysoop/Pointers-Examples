#include <stdio.h>
#include <stdint.h>

int main(){

    char a = 'c'; // 01100011 (99) is the ASCII value of 'c'
    char *pa = &a;
    printf("a = %c\n", a);
    printf("pa = %p, &a = %p\n", pa, &a);

    int *pb = (int*)pa;
    printf("pb = %p\n", pb); 

    // Will give some garbage value because you're also getting 3 bytes of garbage values
    printf("*pb = %d\n", *pb); 

    // Observation: Adding the following lines of code makes *pb not spit out garbage values!
    int8_t *pc = (int8_t*)pa;
    printf("pc = %p\n", pc);
    printf("*pc = %d\n", *pc);

    return 0;
}