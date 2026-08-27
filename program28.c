//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n, i = 2;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * i;
        i = i + 2;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}