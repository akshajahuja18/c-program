#include <stdio.h>
int main() {
    int a[20][20],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)for (j=0;j<n;j++)scanf("%d",&a[i][j]);
    for (i=0;i<n;i++)for (j=i+1;j<n;j++)if (a[i][i]==a[j][j]) {
        printf("Not distinct");
        return 0;
    }
    printf("Distinct");
    return 0;
}
