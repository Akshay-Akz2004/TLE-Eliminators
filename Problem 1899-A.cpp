#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        if(n%3==1 or n%3==2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}