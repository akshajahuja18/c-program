#include <stdio.h>
int main() {
    char s[1000];
    int f[26]= {
        0
    }
    ,i;
    fgets(s,sizeof(s),stdin);
    for (i=0;s[i];i++)if (s[i]>='a'&&s[i]<='z') {
        int k=s[i]-'a';
        f[k]++;
        if (f[k]==2) {
            printf("%c",s[i]);
            return 0;
        }
    }
    printf("No repeating lowercase alphabet");
    return 0;
}
