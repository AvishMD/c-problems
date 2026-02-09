Print a string along with a number

#include <stdio.h>

int main() {
    int a;
    char b[100];
    scanf("%s\n %d", &b,&a);
    printf("%s:""%d", b,a);

    return 0;
}