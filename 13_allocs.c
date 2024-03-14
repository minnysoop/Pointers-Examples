#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calloc vs Malloc
    // 1. Calloc takes 2 args: #number of elements, type of element (malloc takes one)
    // 2. Initializes all the unused blocks to 0 (malloc puts some garbage value)
    int* zeros = (int*)calloc(5, sizeof(int));
    int i;
    for (i=0;i<5;i++){
        *(zeros + i) = i;
        printf("%d ", *(zeros + i));
    }
    printf("\n");

    // Realloc - Used to change the size of an already existing block in the heap
    // Args: pointer to that block, new size in bytes

    int* newZeros = (int*)realloc(zeros, 12*sizeof(int));
    printf("Previous Block Address = %p, New Adress = %p\n", zeros, newZeros);
    // if you are trying to shrink zero, it's going to make a new block and copy the contents there
    // else it's just going to extend the existing zeros
    int j;
    for (j=0;j<12;j++){
        printf("%d ", *(newZeros + j));
    }
    printf("\n");

    return 0;
}