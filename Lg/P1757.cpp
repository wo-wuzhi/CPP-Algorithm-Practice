#include<bits/stdc++.h>
using namespace std;

struct p{
    int w;
    int v;
};

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<p>>a(105,vector<p>(n));
    vector<int>dp(m+1,0);
    for(int i=0;i<n;i++){
        int z;
        p tp;
        cin>>tp.w>>tp.v>>z;
        a[z].push_back(tp);
    }
    for(int i=0;i<=100;i++){
        for(int j=m;j>=0;j--){
            for(int k=0;k<a[i].size();k++){
                int w=a[i][k].w;
                int v=a[i][k].v;
                if(m>=w)
                dp[m]=max(dp[m],dp[m-w]+v);
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}