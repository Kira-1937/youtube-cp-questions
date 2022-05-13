//use of nesting in set 
using namespace std;
#include<bits/stdc++.h>
int main (){
int n ;
cin>>n ;
set <pair<int ,string >> s;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    string s1;
    cin>>s1;
    s.insert({x,s1});
}
for(auto &pr:s){
    cout<<pr.second<<" "<<pr.first <<"\n";
}


    return 0;
}