#include<stdio.h>
int dp[1000];
int main(){
    int n,l,r,h,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&l,&h,&r);
        for(i=l;i<r;i++)
            if(dp[i]<h) dp[i]=h;
    }
    r=0;
    for(i=0;i<1000;i++){
        if(dp[i]!=r) printf("%d %d ",i,dp[i]);
        r=dp[i];
    }
    printf("\n");
    return 0;
}
/*
8
1 11 5
2 6 7
12 7 16
14 3 25
19 18 22
3 13 9
23 13 29
24 4 28*/
