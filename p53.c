

#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a,&b);
    int c=a;
    printf("%d ", a/=b);
    printf("%d",c%=b);

    return 0;
}
