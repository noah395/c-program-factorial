#include <stdio.h>

int main() {
    int i, n, factorial = 1;
    printf("Table of Factorials\n");
    printf("-------------------\n");
    for (n = 1; n <= 10; n++) {
        factorial = 1;
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("%2d! = %10d\n", n, factorial);
    }
    return 0;
}
