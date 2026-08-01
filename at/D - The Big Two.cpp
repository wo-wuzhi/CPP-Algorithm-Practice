#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct p{
    int num;
    int cnt=0;
};

int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    vector<p>mp(n+1);
    map<pair<int,int>,int>same;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mp[x].num=x,mp[y].num=y;
        mp[x].cnt++,mp[y].cnt++;
        same[{min(x,y),x+y-min(x,y)}]++;
    }
    sort(mp.begin(),mp.end(),
        [](const p&a,const p&b){
            return (a.cnt!=b.cnt)?a.cnt<b.cnt:a.num<b.num;
        }
    );
    int i=1;
    while(mp[i].cnt+mp[n].cnt<m) i++;
    for(;i<n;i++){
        for(int j=n;j>i;j--){
            if(mp[i].cnt+mp[j].cnt>=m){
                if(mp[i].cnt+mp[j].cnt-same[{min(mp[i].num,mp[j].num),mp[i].num+mp[j].num-min(mp[i].num,mp[j].num)}]>=m) cnt++;
            }else break;

        }
    }
    cout<<cnt<<endl;
}