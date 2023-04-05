#include<stdio.h>
int fac(int n);
int fac2(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fac2(n));
    return 0;
}

int fac(int n){
    int result=1;
    int i;
    for(i=n;i>0;i--)
        result*=i;
    return(result);
}
int fac2(int n){
    if(n==0)
        return 1;
    else
        return(n*fac2(n-1));
}
