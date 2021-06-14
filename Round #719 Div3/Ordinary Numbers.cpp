/* Let's call a positive integer n ordinary if in the decimal notation all its digits are the same. For example, 1, 2 and 99 are ordinary numbers, but 719 and 2021 are not ordinary numbers.

For a given number n, find the number of ordinary numbers among the numbers from 1 to n.

Input
The first line contains one integer t (1=t=104). Then t test cases follow.

Each test case is characterized by one integer n (1=n=109).

Output
For each test case output the number of ordinary numbers among numbers from 1 to n.

Example
inputCopy
6
1
2
3
4
5
100
outputCopy
1
2
3
4
5
18 */

#include <iostream>
#define ll long long 
using namespace std;
ll nod(ll num){
 ll c=0;
 while(num){
  ll rem=num%10;
  c++;
  num/=10;
 }
return c;
}
int main() {
	// your code goes here
    ll t,n;
    cin>>t;

    while(t--){
    cin>>n;

    if(n<10)
     cout<<n<<endl;

    else{
     ll cal=nod(n),res=0;
     for(ll i=1;i<=cal;i++)
      res=res*10+1;
     cout<<9*(cal-1)+n/res<<endl;
    }}

	return 0;
}
