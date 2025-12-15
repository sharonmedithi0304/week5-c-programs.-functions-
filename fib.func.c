#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("%d %d ", a, b);

    for(i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int num;
    printf("Enter count: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}

