#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int minelement=*min_element(v.begin(),v.end());
        if(v[0]==minelement) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}