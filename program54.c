/*
Q54: Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int n = 4; // Yeh middle sabse badi row ko represent karta hai (jisme 7 stars hain)
    
    // Part 1: Upper half (1, 3, 5, 7 stars with decreasing spaces)
    for (int i = 1; i <= n; i++) {
        // Spaces print karna
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars print karna (2*i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Part 2: Lower half (5, 3, 1 stars with increasing spaces)
    for (int i = n - 1; i >= 1; i--) {
        // Spaces print karna
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars print karna (2*i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}