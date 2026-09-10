/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array in-place without extra space
    int start = 0;
    int end = n - 1;
    int temp;
    
    while (start < end) {
        // Swap elements at 'start' and 'end'
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers towards the middle
        start++;
        end--;
    }
    
    // Print the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}