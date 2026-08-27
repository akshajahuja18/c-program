//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (2 * i - 1);
        i++;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}