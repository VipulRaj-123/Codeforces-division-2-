#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
   ll n,t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
   if(n%2==0)
    cout<<0<<endl;
  else{
    string str=to_string(n);
    ll res=str.size();
    ll c1=str[0]-48;
    if(c1%2==0)
     cout<<1<<endl;
    else{
     ll even=0,flag=0;
     for(ll i=0;i<res;i++){
      ll cal=str[i]-48;
     if(cal%2==0){
      flag=1;break;}}
    if(flag)
     cout<<2<<endl;
    else
     cout<<-1<<endl;
   }}}
  return 0;
  }
	
