//queue tutorial 
using namespace std;
#include<bits/stdc++.h>
int main (){
  queue<string> q;
  q.push("abc");
  q.push("def");
  q.push("ghi");
  q.push("jhi");
  q.push("klm");
while(!q.empty()){
    cout<<q.front()<<endl;
    //yaha top use nahi kr sakta kyuki tujhe output me front vala element milega naki top vala 
    q.pop();
}


    return 0;
}