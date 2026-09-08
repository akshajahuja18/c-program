/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Loop to read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];
    
    // Loop starting from the second element (index 1) to compare
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    
    // Print the result in the expected format
    printf("Max=%d, Min=%d\n", max, min);
    
    return 0;
}