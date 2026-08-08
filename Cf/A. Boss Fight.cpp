#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,sum=0,ma=0,x,res=0;
    cin>>n;
    map<int,int>a;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    int cur=0;
    for(auto it:a){
        res+=it.first*it.second;
        sum+=it.second;
        if(it.second>ma){
            cur=it.first;
            ma=it.second;
        }
    }
    if(sum-ma>=ma-2){
        cout<<res<<endl;
    }else{
        cout<<res-cur*(2*ma-sum-2)<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        solve();
    }
    return 0;
}