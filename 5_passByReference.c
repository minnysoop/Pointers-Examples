#include <stdio.h>

// Pass by reference
void multiplyByTwo(int *p) {
    *p = (*p) * 2;
}

int main() {
    int a = 5;
    multiplyByTwo(&a);
    printf("a = %d\n", a);
}