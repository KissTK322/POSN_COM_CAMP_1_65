#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int a[100100];
int main(){
    int q,n,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        int ch=1;
        for(i=0;i<n;i++){
            if(mp[a[i]]==1){
                printf("%d ",a[i]);
                ch=0;
            }
        }
        if(ch)
            printf("No Alone Num");
        printf("\n");
        mp.clear();
    }
    return 0;
}
/*
3
9
3 2 1 2 3 7 3 6 8
1 7 6 8
7
1 3 2 4 2 0 1
3 4 0
6
-1 -2 -3 -3 -2 -1
No Alone Num
*/
