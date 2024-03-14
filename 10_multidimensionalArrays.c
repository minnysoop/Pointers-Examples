#include <stdio.h>

int main(){

    int matrix[3][2] = {{1,2},{3,4},{5,6}};
    // Stored kinda like this: [  ] [  ] [  ]
    //                         [][] [][] [][]
    int (*mp)[2] = matrix;

    // Different ways to print the first of "1"'s address
    printf("%p\n", mp);
    printf("%p\n", &matrix[0]);
    printf("%p\n", matrix);
    printf("%p\n", *matrix);
    printf("%p\n", matrix[0]);
    printf("%p\n", &matrix[0][0]);
    printf("%p\n", *mp);

    // Different ways to print "3"
    printf("%d\n", *(*mp+2));
    printf("%d\n", matrix[1][0]);
    printf("%d\n", *(mp[1]));
    printf("%d\n", *(mp[1]));
    printf("%d\n", *(*matrix+2));
    printf("%d\n", *(matrix[1]));

    // Any i,j
    printf("%d\n", *(*(matrix + 2) + 1)); // Should give 6

    return 0;
}