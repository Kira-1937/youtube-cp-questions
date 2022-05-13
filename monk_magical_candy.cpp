using namespace std;
#include<bits/stdc++.h>
int main(){
    int t;
    cin>>t;
    while(t--){
   int n ;
   cin>>n;
   int k;
   cin>>k;
  multiset <long long > candy;

   for (int i=0;i<n;i++)
{
    long long c;
   cin>>c;
   candy.insert(c);
}
long long  sum=0;
for(int i=0;i<k;i++){
  auto it=candy.end();
  it--;
  int j=(*it)/2;
  sum=sum+(*(it));
   candy.erase(*it);
   candy.insert(j);
}

cout<<sum<<"\n";


    }
    return 0;
}