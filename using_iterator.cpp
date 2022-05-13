using namespace std;
#include<iostream>
#include<bits/stdc++.h>
int main(){
   vector<int> v;
    for (int i =0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }
auto It=v.begin();
//varna vector <int >::iterator it =v.begin();
for (It=v.begin();It!=v.end();It++)
//yaha pr it =v.end()-1 nhi likhna
{
    cout<<(*It)<<"\n";
}
//-----------------------------------------------------------------------------------
vector<pair<int,int >> v_p={{1,2},{3,4},{5,6}};
auto it=v_p.begin();
for (it=v_p.begin();it!=v_p.end();it++)
{
    cout<<((*it).first)<<" "<<((*it).second)<<"\n";
}
cout<<endl;
for (it=v_p.begin();it!=v_p.end();it++)
{
    cout<<(it->first)<<" "<<(it->second)<<"\n";
}
//-----------------------------------------------------------------------------------
for (int &value:v){
    cout<<value<<" ";
}
cout<<endl;
for(pair<int ,int > &value:v_p){
    cout<<value.first <<" "<<value.second<<"\n";
}


return 0;

}