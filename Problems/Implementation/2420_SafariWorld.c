#include <stdio.h>
#include <stdlib.h>

int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld", labs(a - b));

    return 0;
}