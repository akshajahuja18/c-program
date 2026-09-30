#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000],c;
    int i,v=0,co=0;
    fgets(s,sizeof(s),stdin);
    for (i=0;s[i];i++) {
        c=tolower((unsigned char)s[i]);
        if (c>='a'&&c<='z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;
            else co++;
        }
    }
    printf("Vowels = %d\nConsonants = %d",v,co);
    return 0;
}
