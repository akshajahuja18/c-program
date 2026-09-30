#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    int i,sp=0,d=0,x=0;
    fgets(s,sizeof(s),stdin);
    for (i=0;s[i]&&s[i]!='\n';i++) {
        if (s[i]==' ')sp++;
        else if (isdigit((unsigned char)s[i]))d++;
        else if (!isalpha((unsigned char)s[i]))x++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d",sp,d,x);
    return 0;
}
