#include <stdio.h>
int main() {
    int r,c,i,j,x;
    long long s=0;
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)for (j=0;j<c;j++) {
        scanf("%d",&x);
        s+=x;
    }
    printf("%lld",s);
    return 0;
}
