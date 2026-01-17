#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        int k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> v_cpy=v;
        sort(v_cpy.begin(),v_cpy.end());
        
        if(v_cpy==v or k>1){
             cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}