#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> res(n);
 
    if (n % 2 == 0)
    {
        long long a = 1;
        for (long long k = 1; k < n; k += 2)
        {
            res[k] = a;
            a++;
        }
        for (long long k = 0; k < n; k += 2)
        {
            res[k] = a;
            a++;
        }
    }
    else
    {
        long long a = 1;
 
        for (long long k = 0; k < n; k += 2)
        {
            res[k] = a;
            a++;
        }
        for (long long k = 1; k < n; k += 2)
        {
            res[k] = a;
            a++;
        }
    }
    // fi(n) cout << res[i] << " ";
    for(long long i=0; i<n; i++) cout << res[i] << " ";
    cout << "\n";
}
int main()
{

    long long t;
    t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}