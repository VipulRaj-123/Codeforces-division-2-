/* 
Alexey is travelling on a train. Unfortunately, due to the bad weather, the train moves slower that it should!
Alexey took the train at the railroad terminal. Let's say that the train starts from the terminal at the moment 0. Also, let's say that the train will visit n stations numbered from 1 to n along its way, and that Alexey destination is the station n.
Alexey learned from the train schedule n integer pairs (ai,bi) where ai is the expected time of train's arrival at the i-th station and bi is the expected time of departure
Also, using all information he has, Alexey was able to calculate n integers tm1,tm2,…,tmn where tmi is the extra time the train need to travel from the station i-1 to the station i. Formally, the train needs exactly ai-bi-1+tmi time to travel from station i-1 to station i (if i=1 then b0 is the moment the train leave the terminal, and it's equal to 0).
The train leaves the station i, if both conditions are met:

it's on the station for at least ?bi-ai2? units of time (division with ceiling);
current time =bi.

Since Alexey spent all his energy on prediction of time delays, help him to calculate the time of arrival at the station n.

Input
The first line contains one integer t (1=t=100) — the number of test cases.
The first line of each test case contains the single integer n (1=n=100) — the number of stations.
Next n lines contain two integers each: ai and bi (1=ai<bi=106). It's guaranteed that bi<ai+1.
Next line contains n integers tm1,tm2,…,tmn (0=tmi=106).

Output
For each test case, print one integer — the time of Alexey's arrival at the last station.

Example
input
2
2
2 4
10 12
0 2
5
1 4
7 8
9 10
13 15
19 20
1 2 3 4 5
output
12
32 */
#include <iostream>
#include <vector>
using namespace std;
 void solve() {
	int n,i,time;
	cin >> n;
 
	vector< pair<int, int> > v(n);
	for (i=0;n>i;++i) 
		cin >> v[i].first >> v[i].second;
 
	vector<int> tm(n);
	for (i=0;n>i;++i)
		cin >> tm[i];

 
	 time = tm[0]+v[0].first;
	if (1<n) {
		time=time+(1+v[0].second-v[0].first)/2;
		time = max(v[0].second,time);
		for (i=1;n>i;i++) {
			time=time+v[i].first - v[i - 1].second + tm[i];
			if (n-1==i) 
				break;
 
			time =time+ (v[i].second - v[i].first + 1) / 2;
			time = max(v[i].second,time);
		}
	}
 
	cout << time << endl;
}
 
int main () {
	int t;
	cin>>t;
    while(t--)
     {
     solve();}
	return 0;
}
