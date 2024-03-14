#include <stdio.h>
#include <stdlib.h>

int main(){
    // Stored on the stack
    int a;

    // Stored on the heap
    int *p;
    int size = 5;

    // p is a void pointer 
    p = (int*)malloc(size*sizeof(int));

    // You can also do this
    // int *p = (int*)malloc(size*sizeof(int));

    if (p == NULL){
        printf("No space on the heap\n");
        exit(1);
    }

    int i;
    for (i=0;i<size;i++){
        *(p+i) = i;
    }

    for (i=0;i<size;i++){
        printf("%d ", *(p+i));
    }
    printf("\n");
    
    free(p);

    // In C++: free is del and malloc is new

    return 0;
}