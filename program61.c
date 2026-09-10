/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
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
    
    int key;
    // Read the element to search for
    scanf("%d", &key);
    
    int found_index = -1; // Initialize to -1 (assuming not found initially)
    
    // Linear search logic
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found_index = i; // Update index if found
            break;           // Exit loop early since we found it
        }
    }
    
    // Print the result based on found_index
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}