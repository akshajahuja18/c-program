//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;
    int i, fact;

    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}