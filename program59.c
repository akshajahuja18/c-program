/*
Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/

#include <stdio.h>

int main() {
    int n;
    int even_count = 0;
    int odd_count = 0;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Loop to read elements and immediately count even/odd
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the number is perfectly divisible by 2
        if (arr[i] % 2 == 0) {
            even_count++; // Increment even counter
        } else {
            odd_count++;  // Increment odd counter
        }
    }
    
    // Print the result in the exact requested format
    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    
    return 0;
}