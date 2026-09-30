#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    int i;
    fgets(s,sizeof(s),stdin);
    for (i=0;s[i];i++) {
        char c=tolower((unsigned char)s[i]);
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))putchar(s[i]);
    }
    return 0;
}
