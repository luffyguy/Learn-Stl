#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a,b,c;
    cin>>a>>b>>c;
    v.erase(v.begin()+a-1);
    v.erase(v.begin()+b-1,v.begin()+c-1);

    cout<<v.size()<<endl;
    for(auto value: v){
        cout<<value<<" ";
    }

    return 0;
}