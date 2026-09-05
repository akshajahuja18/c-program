/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main() {
    int n = 5; // Fixed size for the pattern
    
    // Outer loop for the 5 rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop 1: Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Print numbers starting from (n - i + 1) up to n
        for (int k = (n - i + 1); k <= n; k++) {
            printf("%d", k);
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}