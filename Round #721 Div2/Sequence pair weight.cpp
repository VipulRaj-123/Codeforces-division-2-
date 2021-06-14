/* The weight of a sequence is defined as the number of unordered pairs of indexes (i,j) (here i<j) with same value (ai=aj). For example, the weight of sequence a=[1,1,2,2,1] is 4. The set of unordered pairs of indexes with same value are (1,2), (1,5), (2,5), and (3,4).

You are given a sequence a of n integers. Print the sum of the weight of all subsegments of a.

A sequence b is a subsegment of a sequence a if b can be obtained from a by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1=t=105). Description of the test cases follows.

The first line of each test case contains a single integer n (1=n=105).

The second line of each test case contains n integers a1,a2,…,an (1=ai=109).

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, print a single integer — the sum of the weight of all subsegments of a.

Example
input
2
4
1 2 1 1
4
1 2 3 4
output
6
0 */

#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            
            int a[n];
            for (int i = 0 ; i < n; i++){
                cin >> a[i];
            }

            vector <long long> dp(n, 0);
    
            map  <long long,long long> value;
    
            long long final_ans = 0;
    
            for (long long i = 0 ; i < n ; i++){
                if (i > 0) dp[i] = dp[i - 1];
    
                if (value.count(a[i])){
                    dp[i] += value[a[i]];
                }
    
                value[a[i]] += (i + 1);
                final_ans += dp[i];
            } 
    
            cout << final_ans << endl;
        }
}
