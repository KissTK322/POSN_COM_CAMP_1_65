#include<bits/stdc++.h>
using namespace std;
vector<int > prime;
int main(){
    int q,n;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i == 0){
                n/=i;
                prime.push_back(i);
            }
        }
        if(n!=1)    prime.push_back(n);
        sort(prime.begin(),prime.end());
        for(int i=0;i<prime.size();i++){
            if(i == prime.size()-1) printf("%d\n",prime[i]);
            else printf("%d x ",prime[i]);
        }
        prime.clear();
    }
    return 0;
}
