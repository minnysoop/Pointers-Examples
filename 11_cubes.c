#include <stdio.h>

int myFunction(int (*A)[2][2]){
    int i,j,k;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            for (k=0;k<2;k++){
                printf("%d ", *(*(*(A+i)+j)+k));
            }
        }
    }
    printf("\n");
}

int main(){
    int cube[3][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
    // Kinda stored like [          ][          ][          ]
    //                   [    ][    ][    ][    ][    ][    ]
    //                   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ] in memory

    // Printing the first element, 1
    printf("%d %d %d %d\n", *(*(*(cube))), cube[0][0][0], *(cube[0][0]), *(*(cube[0])));
    printf("%d %d %d %d\n", *(*(*(cube)+1)), cube[0][1][0], *(cube[0][0] + 2), *(*(cube[0]))+2);

    int i, j, k;
    i = 1;
    j = 1;
    k = 1;
    // cube[i][j][k]
    printf("%d %d\n", *(*(*(cube + i)+j)+k), cube[i][j][k]);
    printf("%d %d\n", *(*(cube[i]+j)+k), cube[i][j][k]);
    printf("%d %d\n", *(cube[i][j]+k), cube[i][j][k]);

    myFunction(cube);

    return 0;
}