#include <stdio.h>
char a[100][100];
int main(){
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){for(j=0;j<m;j++){ scanf(" %c",&a[i][j]);}}
    for(j=0;j<m;j++){
            scanf("%d",&k);
            for(i=0;i<n && a[i][j]=='.';i++);
            for(i=i-1;i>=0 && k>0;k--,i--){
                a[i][j]='#';}
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){printf("%c",a[i][j]);}
        printf("\n");
    }
    return 0;
}
