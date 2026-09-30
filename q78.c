#include <stdio.h>
int main() {
    int n,i,j,x;
    long long s=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)for (j=0;j<n;j++) {
        scanf("%d",&x);
        if (i==j)s+=x;
    }
    printf("%lld",s);
    return 0;
}
