#include<bits/stdc++.h>
using namespace std;
vector<int> a;
map<int,int> m;
map<int,int> p;
map<int,int> mark;
bool comp(int x,int y){
    if(m[x] != m[y]) return m[x] > m[y];
    else {
        return  p[x] < p[y];
    }
}
int main(){
    int n,c,x;
    scanf("%d %d",&n,&c);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a.push_back(x);
        m[a[i]]++;
        if(!mark[a[i]]){
            mark[a[i]] = 1;
            p[a[i]] = i;
        }
    }
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}
