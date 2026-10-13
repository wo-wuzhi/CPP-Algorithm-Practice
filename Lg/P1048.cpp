#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,m;
    cin>>t>>m;
    vector<int>c(m);
    vector<int>v(m);
    vector<int>dp(t+1);
    for(int i=0;i<m;i++){
        cin>>c[i]>>v[i];
    }
    for(int i=0;i<m;i++){
        for(int j=t;j>=c[i];j--){
            dp[j]=max(dp[j],dp[j-c[i]]+v[i]);
        }
    }
    cout<<dp[t]<<endl;
    return 0;
}