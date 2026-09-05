/*
Q52: Write a program to print the following pattern:
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>

int main() {
    int n = 5; // Maximum number of stars in the middle row
    
    // Part 1: Upper half of the pattern (1 to 5 stars)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Part 2: Lower half of the pattern (4 down to 1 star)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}