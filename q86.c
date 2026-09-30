#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i,n;
    fgets(s,sizeof(s),stdin);
    n=strcspn(s,"\n");
    for (i=0;i<n/2;i++)if (s[i]!=s[n-1-i]) {
        printf("Not Palindrome");
        return 0;
    }
    printf("Palindrome");
    return 0;
}
