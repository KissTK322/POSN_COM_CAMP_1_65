#include <stdio.h>
int a[11][10],b[10][10],ans[10][10];
int main(){
    int n,m,r,c; scanf("%d %d %d %d",&n,&m,&r,&c);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) scanf("%d",&b[i][j]);
    if(m!=r) {printf("Can't Multiply.\n"); return 0;}
    for(int i=0;i<n;i++)
        for(int j=0;j<c;j++)
            for(int k=0; k<m; k++)
                ans[i][j] += a[i][k]*b[k][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<c;j++)
            printf("%d ",ans[i][j]);
    printf("\n");
    return 0;
}
