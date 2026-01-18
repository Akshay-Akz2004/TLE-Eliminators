#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxseq=0;
        int seq=0;
        int counter=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                seq++;
                counter++;
            }
            else seq=0;
            maxseq=max(maxseq,seq);
        }
        if(maxseq>=3) cout<<"2"<<endl;
        else cout<<counter<<endl;
    }
}