//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary = 0\n");
    }
    else
    {
        while (num > 0)
        {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }

        printf("Binary = ");

        while (i > 0)
        {
            printf("%d", binary[i - 1]);
            i--;
        }

        printf("\n");
    }

    return 0;
}