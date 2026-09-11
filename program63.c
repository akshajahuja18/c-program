/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n1, n2;
    
    // Read the size and elements of the first array
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Read the size and elements of the second array
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Create an array large enough to hold elements from both arrays
    int merged_size = n1 + n2;
    int merged_arr[merged_size];
    
    // Copy elements from the first array into the merged array
    for (int i = 0; i < n1; i++) {
        merged_arr[i] = arr1[i];
    }
    
    // Copy elements from the second array into the merged array, right after the first
    for (int i = 0; i < n2; i++) {
        merged_arr[n1 + i] = arr2[i];
    }
    
    // Print the final merged array
    for (int i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");
    
    return 0;
}