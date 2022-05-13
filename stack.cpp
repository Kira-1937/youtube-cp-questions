//learn about stack
using namespace std;
#include<bits/stdc++.h>

int main(){
stack<int> s;
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
while(!s.empty()){
    cout<<s.top()<<"\n";
    //top use kiya jaata ntop valaaki front kyuki  element apne output le sakte h 
    s.pop();
}


return 0;
}