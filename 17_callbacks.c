#include<stdio.h>
#include<stdlib.h>

// Uses of function pointers: passing a function as an argument in another function and calling it.

int compare(int a, int b){
    if (a > b) {
        return 0;
    }
    return 1;
}

void sort(int n, int A[], int (*c)(int,int)){
    int i,j,tmp;
    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++) {
            if (c(A[j], A[j+1])){
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
}

int main(){
    int i, A[] = {1, 5, 6, 4, 2, 1};
    sort(6, A, compare);
    for (i=0;i<6;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}