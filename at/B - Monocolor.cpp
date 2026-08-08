#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ma=0;
    cin>>n;
    map<int,int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(auto it:a){
        ma=max(ma,it.second);
    }
    cout<<n-ma<<endl;
    return 0;
}