#include <stdio.h>

int main(){
    int A[] = {1, 2, 3};
    for (int i=0;i<3;i++){
        printf("%p = %d\n", A + i, *(A + i));
        printf("%p = %d\n", &A[i], A[i]);
    }
    return 0;
}