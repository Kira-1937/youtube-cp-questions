using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    stack<char> s;
    for(int i=0;i<n;i++){
        char  c;
        cin>>c;
        
        if((s.size()==0)&&(c==')')){
         
         break;
        }
        if((s.size()!=0)&&(c==')')){
         s.pop();
        }
        else{
            s.push(c);
        }
    }

     if(s.size()==0){
         cout<<"NO";

     }
    else{
        cout<<"YES";
    }

    return 0;
}