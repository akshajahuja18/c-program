/*
Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    // Declare an array of size n
    int arr[n];
    
    // Loop to read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop to print the elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Print a newline at the end
    printf("\n");
    
    return 0;
}