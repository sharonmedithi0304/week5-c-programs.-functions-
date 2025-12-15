#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, r;
    while(n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    return (sum == temp);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}

