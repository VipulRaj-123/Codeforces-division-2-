/*  Omkar has received a message from Anton saying "Your story for problem A is confusing. Just make a formal statement." Because of this, Omkar gives you an array a=[a1,a2,…,an] of n distinct integers. An array b=[b1,b2,…,bk] is called nice if for any two distinct elements bi,bj of b, |bi-bj| appears in b at least once. In addition, all elements in b must be distinct. Can you add several (maybe, 0) integers to a to create a nice array b of size at most 300? If a is already nice, you don't have to add any elements.

For example, array [3,6,9] is nice, as |6-3|=|9-6|=3, which appears in the array, and |9-3|=6, which appears in the array, while array [4,2,0,6,9] is not nice, as |9-4|=5 is not present in the array.

For integers x and y, |x-y|=x-y if x>y and |x-y|=y-x otherwise.

Input
Each test contains multiple test cases. The first line contains t (1=t=50), the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer n (2=n=100) — the length of the array a.

The second line of each test case contains n distinct integers a1,a2,?,an (-100=ai=100) — the elements of the array a.

Output
For each test case, output one line containing YES if Omkar can create a nice array b by adding elements to a and NO otherwise. The case of each letter does not matter, so yEs and nO will also be accepted.

If the first line is YES, output a second line containing a single integer k (n=k=300).

Then output one line containing k distinct integers b1,b2,?,bk (-109=bi=109), the elements of the nice array b. b1,b2,?,bk can be in any order. For each ai in a, ai must appear at least once in b.

It can be proved that if Omkar can create such an array b, then he can also do so in a way that satisfies the above constraints.

If multiple solutions exist, you can print any.

Example
inputCopy
4
3
3 0 9
2
3 4
5
-7 3 13 -2 8
4
4 8 12 6
outputCopy
yes
4
6 0 3 9
yEs
5
5 3 1 2 4
NO
Yes
6
8 12 6 2 4 10  */
#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
    ll t,n;
    cin>>t;
    while(t--){
     cin>>n;
    ll a[n],c=0;
    for(ll i=0;i<n;i++){
     cin>>a[i];
     if(a[i]<0)
      c++;}
    if(c>=1){
     cout<<"NO"<<endl;
     continue;
     }
    cout<<"YES"<<endl;
    cout<<101<<endl;
    for(int i=0;i<=100;i++)
     cout<<i<<" ";
    cout<<endl;
   }
	return 0;
}
