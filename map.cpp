using namespace std;
#include<bits/stdc++.h>
int main(){

//unordered map ka use mostly time comlexity decrease krne k liye hota h but isme hum keval int string or
 //long jaise hi use kr sakte h pair nhi use kr sakte kyuki cahlega nhi 

    map<int ,string> mp;
    // mp[1]="abc";
    // mp[2]="efg";
    // mp[3]="hij";
    // mp.insert({4,"klm"});
    for (int i=1;i<5;i++){
        string s;
        cin>>s;
        // mp[i]=s;
        mp.insert({i,s});
    }
    auto it=mp.begin();
    for(it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    cout<<endl;
for(auto &pr:mp){
    cout<<pr.first<<" "<<pr.second<<"\n";
}
//use of find function{ it will return us the itrator of that value}
//so
auto It=mp.find(2);
if((It)==mp.end())
{
    cout<<" no value";
}
else{
    cout<<(*It).second;
}
mp.erase(it);
mp.erase(3);

return 0;


}