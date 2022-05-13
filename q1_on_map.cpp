/* given a string n print unique string in lexographic order with their frequency 
n=10^5
|s|=100 */





using namespace std;
#include<bits/stdc++.h>
int main (){
map <string,int > mp ;
int n ;
cin>>n;
for (int i=0;i<n;i++){
    string s;
    cin>>s;
    mp[s]++;
}
for (auto pr:mp){
    cout<<pr.first <<" "<<pr.second<<'\n';
}

return 0;



}