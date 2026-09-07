#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main(){
    
    int n,ma=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            a[i-1][j]+=max(a[i][j],a[i][j+1]);
            ma=max(ma,a[i-1][j]);
        }
    }
    cout<<ma<<endl;
    return 0;
}