#include <stdio.h>
int main() {
    int a[20][20],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)for (j=0;j<n;j++)scanf("%d",&a[i][j]);
    for (i=0;i<n;i++)for (j=i+1;j<n;j++)if (a[i][j]!=a[j][i]) {
        printf("Not symmetric");
        return 0;
    }
    printf("Symmetric");
    return 0;
}
