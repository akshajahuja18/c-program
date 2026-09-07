/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the value of n from the user
    scanf("%d", &n);
    
    // Loop through all numbers from 2 to n (1 is not prime)
    for (int i = 2; i <= n; i++) {
        int is_prime = 1; // Assume the current number 'i' is prime
        
        // Check if 'i' is divisible by any number from 2 to i/2
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; // It is divisible, so it's not prime
                break;        // No need to check further for this number
            }
        }
        
        // If it is prime, print it with a space
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    
    // Print a newline at the end
    printf("\n");
    
    return 0;
}