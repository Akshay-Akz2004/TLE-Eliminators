#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()>2){
            cout<<"NO"<<endl;
            continue;
        }
        int req=n/2;
        bool flag=true;
        for(auto i:mp){
            if(i.second==req or i.second==n){
                cout<<"YES"<<endl;
                flag=false;
                break;
            }
        }
        
        if(flag) cout<<"NO"<<endl;
        
        
    }
}