#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    string s;
    int cnt=0,len;
    cin>>len>>s;
    if(s.length()==1){
        if(s[0]=='x'){cout<<1<<endl;return 0;}
        else {cout<<0<<endl;return 0;}
    }
    for(int i=1;i<s.length()-1;i++){
        if(s[i]=='x'&&s[i-1]=='x'&&s[i+1]=='x') cnt++;
    }
    if(s[0]==s[1]&&s[0]=='x') cnt++;
    if(s[s.length()-1]==s[s.length()-2]&&s[s.length()-1]=='x') cnt++;
    cout<<cnt<<endl;
}