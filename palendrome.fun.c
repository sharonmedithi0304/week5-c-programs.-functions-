#include <stdio.h>

int isPalindrome(int n) {
    int temp = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if(temp == rev)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

