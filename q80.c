#include <stdio.h>
int main() {
    int a[20][20],b[20][20],x[20][20]= {
        0
    }
    ,r1,c1,r2,c2,i,j,k;
    scanf("%d%d",&r1,&c1);
    for (i=0;i<r1;i++)for (j=0;j<c1;j++)scanf("%d",&a[i][j]);
    scanf("%d%d",&r2,&c2);
    if (c1!=r2) {
        printf("Multiplication not possible");
        return 0;
    }
    for (i=0;i<r2;i++)for (j=0;j<c2;j++)scanf("%d",&b[i][j]);
    for (i=0;i<r1;i++)for (j=0;j<c2;j++)for (k=0;k<c1;k++)x[i][j]+=a[i][k]*b[k][j];
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++)printf("%d ",x[i][j]);
        printf("\n");
    }
    return 0;
}
