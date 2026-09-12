/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the initial size of the array
    scanf("%d", &n);
    
    // Declare array with one extra space for the new element
    int arr[n + 1];
    
    // Read the sorted elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    // Read the element to be inserted
    scanf("%d", &key);
    
    // Start from the last element and shift greater elements to the right
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    // Insert the new element at the correct position
    arr[i + 1] = key;
    
    // Increment the size of the array since we added an element
    n++;
    
    // Print the updated array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}