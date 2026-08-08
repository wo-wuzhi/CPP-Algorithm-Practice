#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    bool ch=true;
    cin>>n>>q;
    vector<int>p(n+1);
    vector<int>c(n+1);
    for(int i=1;i<=n;i++){
        cin>>c[i];
        p[c[i]]=i;
    }
    for(int i=0;i<q;i++){
        int cn;
        cin>>cn;
        if(cn==1){
            int l,r;
            cin>>l>>r;
            if(ch){
                int a=c[l],b=c[r];
                swap(c[l],c[r]);
                p[a]=r;
                p[b]=l;
            }else{
                int a=p[l],b=p[r];
                swap(p[l],p[r]);
                c[a]=r;
                c[b]=l;
            }
        }else{
            ch=!ch;
        }
    }
        if(!ch){
            for(int i=1;i<=n;i++)cout<<p[i]<<' ';
            
        }else{
            for(int i=1;i<=n;i++)cout<<c[i]<<' ';
            
        }
    return 0;
}