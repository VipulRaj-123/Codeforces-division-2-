/* You are given an array a of n integers. Count the number of pairs of indices (i,j) such that i<j and aj-ai=j-i.

Input
The first line contains one integer t (1=t=104). Then t test cases follow.

The first line of each test case contains one integer n (1=n=2·105).

The second line of each test case contains n integers a1,a2,…,an (1=ai=n) — array a.

It is guaranteed that the sum of n over all test cases does not exceed 2·105.

Output
For each test case output the number of pairs of indices (i,j) such that i<j and aj-ai=j-i.

Example
input
4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6
output
1
3
3
10  */

#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
    ll t,n;
    cin>>t;
    while(t--){
     cin>>n;
    ll a[n],sum=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
     cin>>a[i];
     mp[a[i]-i]++;
    }
   for(auto j:mp)
    sum+=j.second*(j.second-1)/2;
   cout<<sum<<endl;
   }
	return 0;
}

