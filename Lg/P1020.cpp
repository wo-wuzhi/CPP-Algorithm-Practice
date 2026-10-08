#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    int x;
    while(cin>>x) a.push_back(x);
    if(a.empty())cout<<0<<endl<<0<<endl;
    vector<int>b;
    for(int y:a){
        if(b.empty()||b.back()>=y) b.push_back(y);
        else{
            int pos=(int)(upper_bound(b.begin(),b.end(),y,greater<int>())-b.begin());
            b[pos]=y;
        }
    }
    vector<int>c;
    for(int z:a){
        int p=(int)(lower_bound(c.begin(),c.end(),z)-c.begin());
        if(p==c.size()) c.push_back(z);
        else c[p]=z;
    }
    cout<<b.size()<<endl<<c.size()<<endl;
    return 0;
}