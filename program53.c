/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int n = 5; // Yeh middle peak row ko represent karta hai (jisme 9 stars hain)
    
    // Part 1: Upper half (1, 3, 5, 7, 9 stars)
    for (int i = 1; i <= n; i++) {
        // Har row mein (2*i - 1) stars print honge
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Part 2: Lower half (7, 5, 3, 1 stars)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}