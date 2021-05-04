//write the strings lexiographically
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<string> s;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.insert(x);
    }
    for(auto value : s){
        cout<<value<<endl;
    }

    return 0;
}