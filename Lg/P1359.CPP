#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=INT_MAX;
    cin>>n;
    vector<vector<int>>a(n+1,vector<int>(n+1,0));
    vector<int>dp(n+1,INT_MAX);
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    dp[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            dp[i]=min(dp[i],a[j][i]+dp[j]);
        }
    }
    cout<<dp[n];
}