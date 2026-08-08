#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,cnt0=0,cnt1=0,sum1=0,sum0=0;
    cin>>n;
    string s;
    cin>>s;
    char pre=s[0];
    if(s[0]=='0') sum0++;
    else sum1++;
    for(int i=1;i<n;i++){
        if(s[i]=='0') sum0++;
        else sum1++;
        if(s[i]==pre){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }else pre=s[i];
    }
    if(abs(cnt0-cnt1)<=1){cout<<cnt0+cnt1<<endl;return;}
    else if(abs(sum0-sum1)==1){cout<<sum0+sum1-2<<endl;return;}
    else if(abs(sum0-sum1)==2){
        if(s[0]==s[n-1]){cout<<sum0+sum1-1<<endl;return;}
        else{cout<<sum0+sum1-3<<endl;return;}
    }
    else{
        cout<<-1<<endl;
    }
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