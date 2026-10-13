#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,n;
    cin>>v>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>dp(v+1,0);
    for(int i=0;i<n;i++){
        for(int j=v;j>=a[i];j--){
            dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
        }
    }
    cout<<v-dp[v]<<endl;
    return 0;
}