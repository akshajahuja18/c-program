/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the sorted elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    // Read the element to search for
    scanf("%d", &key);
    
    int low = 0;
    int high = n - 1;
    int found_index = -1; // Initialize to -1 (assuming not found)
    
    // Binary search logic
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index
        
        if (arr[mid] == key) {
            found_index = mid; // Element found
            break;
        } else if (arr[mid] < key) {
            low = mid + 1; // Discard the left half
        } else {
            high = mid - 1; // Discard the right half
        }
    }
    
    // Print the result based on whether the key was found
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}