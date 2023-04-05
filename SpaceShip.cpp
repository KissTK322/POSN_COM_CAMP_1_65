#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,y,z,m,k,c;
};A shop[21];
int minn = 1e9,n,M,mark[21];
int minnie(int a,int b){
    return (a>b) ? b:a;
}
void trav(int x,int y,int z,int m,int k,int c,int sum){
    A next;
    for(int i=0;i<M;i++){
        if(!mark[i]){
            mark[i] = 1;
            next = shop[i];
            next.m += m;
            next.k += k;
            next.c += c;
            int Nsum = sum+((x-next.x)*(x-next.x)+(y-next.y)*(y-next.y)+(z-next.z)*(z-next.z));
            if(next.m>=n && next.k>=n && next.c>=n){
                minn = minnie(minn,Nsum);
                mark[i]=0;
                continue;
            }
            trav(next.x,next.y,next.z,next.m,next.k,next.c,Nsum);
            mark[i]=0;
        }
    }
}
int main(){
    int x,y,z;
    scanf("%d %d %d %d %d",&n,&x,&y,&z,&M);
    for(int i=0;i<M;i++)
        scanf("%d %d %d %d %d %d",&shop[i].x,&shop[i].y,&shop[i].z,&shop[i].m,&shop[i].k,&shop[i].c);
    trav(x,y,z,0,0,0,0);
    printf("%d\n",minn);
    return 0;
}
