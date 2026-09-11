/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}; // Array to store frequency of digits from 0 to 9
    
    // Read the integer number
    scanf("%lld", &n);
    
    // Handle 0 explicitly
    if (n == 0) {
        freq[0] = 1;
    } else {
        // Handle negative numbers if any
        if (n < 0) {
            n = -n;
        }
        
        // Extract digits and update their frequencies
        while (n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n = n / 10;
        }
    }
    
    int max_freq = 0;
    int max_digit = -1;
    
    // Loop from 0 to 9 ensures that in case of a tie, the smaller digit is picked
    for (int i = 0; i <= 9; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_digit = i;
        }
    }
    
    // Print the digit with the highest frequency
    printf("%d\n", max_digit);
    
    return 0;
}