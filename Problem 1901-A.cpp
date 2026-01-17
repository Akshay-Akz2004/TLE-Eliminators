#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int maxdiff=v[0];
        for(int i=1;i<n;i++){
            maxdiff=max(maxdiff,v[i]-v[i-1]);
        }
        
        maxdiff=max(maxdiff,(x-v[n-1])*2);
        cout<<maxdiff<<endl;
    }
}