#include <stdio.h>

int main() {
    int x = 5;
    int *xPtr = &x;
    printf("%d\n", x);
    printf("%d\n", *xPtr);
    printf("%d\n", xPtr);
    printf("%d\n", &x);
    return 0;
}

