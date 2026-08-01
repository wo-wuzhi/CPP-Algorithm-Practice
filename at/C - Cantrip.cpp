#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    string s;
    cin>>n>>s;
    vector<int>a(n+1,0);
    a[0]=0;
    for(int i=0;i<n;i++){
        a[i+1]=a[i];
        if(s[i]=='o') a[i+1]++;
    }
    for(int i=1;i<=n;i++){
        int cnt=a[i],res=i,ch=1;
        while(cnt!=0){
            int tp=res;
            res+=cnt;
            if(res>n){cout<<n<<endl;ch=-1;break;}
            cnt=a[res]-a[tp];
        }
        if(ch>0)cout<<res<<endl;
    }
    
}