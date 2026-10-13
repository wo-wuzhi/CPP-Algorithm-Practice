#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin>>n>>m;
    vector<pair<int,int>> a(m+1);
    vector<int>dp(n+1,0);
    for(int i=0;i<m;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<m;i++){
        for(int j=n;j>=a[i].first;j--){
            dp[j]=max(dp[j],dp[j-a[i].first]+a[i].first*a[i].second);
            ans=max(ans,dp[j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}