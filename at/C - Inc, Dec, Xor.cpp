#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,cur=0;
    cin>>n>>q;
    vector<int>a(n+1,0);
    vector<int>pos;
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x;
        if(x==1){ 
            cin>>y;
            cur^=a[y];
            a[y]++;
            cur^=a[y];
            if(a[y]==1) pos.push_back(y);
        }else{
            for(int j=0;j<pos.size();){
                int x=a[pos[j]];
                int y=pos[j];
                cur^=x^(x-1);
                a[pos[j]]=x-1;
                if(x==1){
                    pos[j]=pos.back();
                    pos.pop_back();
                }else j++;
            }
        }
        cout<<cur<<endl;
    }
    return 0;
}