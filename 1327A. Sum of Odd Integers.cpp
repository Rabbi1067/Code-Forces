#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      if(n>=pow(k,2) && (n%2==k%2)){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
}
