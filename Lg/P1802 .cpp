#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<long long,long long>>get(n);
    vector<long long>cost(n);
    vector<long long>dp(x+1,0);
    for(int i=0;i<n;i++){
        cin>>get[i].first>>get[i].second>>cost[i];
    }
    for(int i=0;i<n;i++){
        for(int j=x;j>=0;j--){
            if(j>=cost[i]){
                dp[j]=max(dp[j]+get[i].first,dp[j-cost[i]]+get[i].second);
            }else dp[j]+=get[i].first;
        }
    }
    cout<<dp[x]*5<<endl;
    return 0;
}