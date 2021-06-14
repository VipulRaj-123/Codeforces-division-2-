/* To satisfy his love of matching socks, Phoenix has brought his n socks (n is even) to the sock store. Each of his socks has a color ci and is either a left sock or right sock.
Phoenix can pay one dollar to the sock store to either:

recolor a sock to any color c' (1=c'=n)
turn a left sock into a right sock
turn a right sock into a left sock
The sock store may perform each of these changes any number of times. Note that the color of a left sock doesn't change when it turns into a right sock, and vice versa.

A matching pair of socks is a left and right sock with the same color. What is the minimum cost for Phoenix to make n/2 matching pairs? Each sock must be included in exactly one matching pair.

Input
The input consists of multiple test cases. The first line contains an integer t (1=t=1000) — the number of test cases.
The first line of each test case contains three integers n, l, and r (2=n=2·105; n is even; 0=l,r=n; l+r=n) — the total number of socks, and the number of left and right socks, respectively.
The next line contains n integers ci (1=ci=n) — the colors of the socks. The first l socks are left socks, while the next r socks are right socks.
It is guaranteed that the sum of n across all the test cases will not exceed 2·105.

Output
For each test case, print one integer — the minimum cost for Phoenix to make n/2 matching pairs. Each sock must be included in exactly one matching pair.

Example
input
4
6 3 3
1 2 3 2 2 2
6 2 4
1 1 2 2 2 2
6 5 1
6 5 4 3 2 1
4 0 4
4 4 4 3
output
2
3
5
3 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	 int t,n,l,r,x,i;
	 cin>>t;
	 while(t--){
	 	int pp,sum1=0,sum2=0;
	 	cin>>n>>l>>r;
	 	int a[2][n];
	 	for(i=0;i<n;i++) 
	 	  a[0][i]=0,a[1][i]=0;
	 	for(i=0;i<n;i++){
		 	cin>>x;
		 	a[(i<l)?0:1][x-1]++;
		}
		for(i=0;i<n;i++){
			x = min(a[0][i],a[1][i]);
			a[0][i]-=x;
			a[1][i]-=x;
		}
		for(i=0;n>i;i++)
			sum1+=a[0][i],sum2+=a[1][i];
		 int ans = 0;
		 if(sum2>sum1){
		 for(i=0;i<n && sum2!=sum1;i++){
		 		if(a[1][i]>1){
		 			sum2=sum2-2;
		 			a[1][i]=a[1][i]-2;
		 			ans++;
		 			i--;
		 		}
		 }
 
		 }else{
		 	 for(i=0;n>i&&sum2!=sum1;i++){
		 		if(1<a[0][i]){
		 			sum1=sum1-2;
		 			a[0][i]=a[0][i]-2;
		 			ans++;
		 			i--;
		 		}
		 }
		 }
		 cout<<max(sum2,sum1)+ans<<endl;
	 }
 
}
