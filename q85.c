#include <stdio.h>
#include <string.h>
int main() {
    char s[1000],t;
    int i,n;
    fgets(s,sizeof(s),stdin);
    n=strcspn(s,"\n");
    s[n]='\0';
    for (i=0;i<n/2;i++) {
        t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
    printf("%s",s);
    return 0;
}
