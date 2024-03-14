#include <stdio.h>

void print(char* c){
    int i = 0;
    while (c[i] != '\0'){
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

int main(){

    char s[] = "hello";
    print(s);
    char p[10] = "hi";
    print(p);
    char l[] = {'h', '0', 'l', 'a', '\0'};
    print(l);
    return 0;
}