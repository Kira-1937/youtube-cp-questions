//use of unordered set 
//q1 print yes or if the string is present or no
//and print all the string using just set
using namespace std;
 #include <bits/stdc++.h>
 int main(){
     unordered_set <string > s;
int n ;
cin>>n;
for (int i=0;i<n;i++){
    string s1;
    cin>>s1;
    s.insert(s1);
}
int testcase;
cin>>testcase;
while(testcase--){
    string s2;
    cin>>s2;
    if(s.find(s2)==s.end()){
        cout<<"no\n";
    }
else{
    cout<<"yes\n";
}

}

return 0;

 }

 
 int main(){
     set<string > c;
     int n;
     cin>>n;
     for (int i=0;i<n;i++){
         string e;
         cin>>e;
         c.insert (e);
     }
     cout<<endl;
auto it=c.begin();
for(it=c.begin();it!=c.end();it++){
    cout<<(*it)<<" "<<"\n";
}
 cout<<endl;
for(auto &value:c){
    cout<<value<<"\n";
}
return 0;
 }