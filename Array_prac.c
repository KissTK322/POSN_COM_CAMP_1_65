#include <stdio.h>
int a[1010];
int main(){
    int i,n,k,cnt;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--) printf("%d ",a[i]);
    printf("\n"); scanf("%d",&k);
    for(i=0;i<n;i++) if(a[i]==k) cnt++;
    printf("%d",cnt);
    return 0;
}
