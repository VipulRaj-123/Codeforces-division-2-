/* Phoenix has collected n pieces of gold, and he wants to weigh them together so he can feel rich. The i-th piece of gold has weight wi. All weights are distinct. He will put his n pieces of gold on a weight scale, one piece at a time.
The scale has an unusual defect: if the total weight on it is exactly x, it will explode. Can he put all n gold pieces onto the scale in some order, without the scale exploding during the process? If so, help him find some possible order.
Formally, rearrange the array w so that for each i (1=i=n), ?j=1iwj?x.

Input

The input consists of multiple test cases. The first line contains an integer t (1=t=1000) — the number of test cases.
The first line of each test case contains two integers n and x (1=n=100; 1=x=104) — the number of gold pieces that Phoenix has and the weight to avoid, respectively.
The second line of each test case contains n space-separated integers (1=wi=100) — the weights of the gold pieces. It is guaranteed that the weights are pairwise distinct.

Output
For each test case, if Phoenix cannot place all n pieces without the scale exploding, print NO. Otherwise, print YES followed by the rearranged array w. If there are multiple solutions, print any.

Example
inputCopy
3
3 2
3 2 1
5 3
1 2 3 4 8
1 5
5
outputCopy
YES
3 2 1
YES
8 1 2 3 4
NO */
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,n,i,x,sum;
 cin>>t;
 while(t--){
 	i=0;
 	sum=0;
 	cin>>n>>x;
 	int a[n];
 	for(i=0;i<n;i++){
 		cin>>a[i];
sum+=a[i];
}
 		i = 0;
 	if(x == sum)
 		cout<<"NO"<<endl;
 		else {
sum = 0;
 			cout<<"YES"<<endl;
 			while(n>i)
 			{
 				if( sum+a[i]==x)
 				break;
 				cout<<a[i]<<" ";
 				sum+=a[i];
 				i++;
 			}
 			if(n!=i){
 				cout<<a[i+1]<<" "<<a[i]<<" ";
 				i+=2;
 				while(n>i)
 				cout<<a[i++]<<" ";
 			}
 			cout<<endl;
 		
 		}
 }
}
