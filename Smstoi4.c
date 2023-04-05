#include<stdio.h>
char a[20][20]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"},ans[100];
int n=0;
void kod(int s,int t){
    if(s==1){
        while(t--)
            if(n>0)
                n--;
    }
    if(s==7 || s==9)
        ans[n++]=a[s-2][(t-1)%4];
    else
        ans[n++]=a[s-2][(t-1)%3];
}
int main(){
    int i,s,q,t,v,h;
    scanf("%d",&q);
    q--;
    scanf("%d %d",&s,&t);
    kod(s,t);
    while(q--){
        scanf("%d %d %d",&h,&v,&t);
        s=s+h+(v*3);
        kod(s,t);
    }
    for(i=0;i<n;i++)
        printf("%c",ans[i]);
    if(n==0)
        printf("null");
    return 0;
}
