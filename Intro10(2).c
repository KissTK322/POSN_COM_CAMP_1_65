#include <stdio.h>
int min(int a,int b){
    return (a>b) ? b:a;
}
int main()
{
    int n;scanf("%d",&n);
    int l = (n*2)-1;
    for(int i=1;i<=l;i++){
        int r = min(i,l-i+1);
        for(int j=1;j<=l;j++){
            if(min(j,l-j+1) <= r) printf("*");
            else printf("-");
        }
        printf("\n");
    }
    return 0;
}
