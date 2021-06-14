/* Given an integer n, find the maximum value of integer k such that the following condition holds:

n & (n-1) & (n-2) & (n-3) & ... (k) = 0
where & denotes the bitwise AND operation.
Input
The first line contains a single integer t (1=t=3·104). Then t test cases follow.

The first line of each test case contains a single integer n (1=n=109).

Output
For each test case, output a single integer — the required integer k.

Example
input
3
2
5
17
output
1
3
15  */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here   
    ll t,n;
    cin>>t;
    while(t--){
    cin>>n;
    ll res=log2(n);
   cout<<(ll)pow(2,res)-1<<endl;
  }
	return 0;
}
