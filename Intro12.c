#include <stdio.h>
int main(){
    int q,n,i,j; scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++) if(i==0 || j==0 || i==n/2 || (j==n-1 && i<=n/2)) printf("*"); else printf("-");
        printf("-");
            for(j=0;j<=n-1;j++) if(i==0 || j==0 || i==n-1 || j==n-1) printf("*"); else printf("-");
        printf("-");
            for(j=0;j<=n-1;j++) if(i==0 || i==n-1 || i==n/2 || (j==0 && i<=n/2) || (j==n-1 && i>=n/2)) printf("*"); else printf("-");
        printf("-");
            for(j=0;j<=n-1;j++) if(j==0 || j==n-1 || i==j) printf("*"); else printf("-");
        printf("\n");
    }}}
