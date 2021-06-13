/*                              B. Max and Mex

You are given a multiset S initially consisting of n distinct non-negative integers. A multiset is a set, that can contain some elements multiple times.

You will perform the following operation k times:

Add the element ?a+b2? (rounded up) into S, where a=mex(S) and b=max(S). If this number is already in the set, it is added again.
Here max of a multiset denotes the maximum integer in the multiset, and mex of a multiset denotes the smallest non-negative integer that is not present in the multiset. For example:

mex({1,4,0,2})=3;
mex({2,5,1})=0.
Your task is to calculate the number of distinct elements in S after k operations will be done.

Input
The input consists of multiple test cases. The first line contains a single integer t (1=t=100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n, k (1=n=105, 0=k=109) — the initial size of the multiset S and how many operations you need to perform.

The second line of each test case contains n distinct integers a1,a2,…,an (0=ai=109) — the numbers in the initial multiset.

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, print the number of distinct elements in S after k operations will be done.

Example
inputCopy
5
4 1
0 1 3 4
3 1
0 1 4
3 0
0 1 4
3 2
0 1 2
3 2
1 2 3
outputCopy
4
4
3
5
3 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
    ll t,n,i,k;
    cin>>t;
    while(t--){
    cin>>n>>k;
    ll a[n];
   set<ll>st;
    for(i=0;i<n;i++){
    cin>>a[i];
   st.insert(a[i]);}
    ll maxm=*max_element(a,a+n);
    for(i=0;i<maxm;i++)
     if(st.find(i)==st.end())
      break;
   if(i<maxm){
    ll cal=maxm+i;
    if(cal%2)
     cal=cal/2+1;
    else
      cal=cal/2;
    if(k==0)
     cout<<st.size()<<endl;
    else if(k){
    if(st.find(cal)!=st.end())
     cout<<st.size()<<endl;
   else
     cout<<st.size()+1<<endl;
    }}
  else
   cout<<st.size()+k<<endl;
 }
	return 0;
}
