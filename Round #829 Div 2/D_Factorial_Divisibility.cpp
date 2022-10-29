#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    map<long long, long long> m;
    for(long long i = 0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    // fu(i, 1, x - 1)
    for(long long i=1; i<x; i++)
    {
        if (m[i] % (i + 1) != 0)
        {
            cout << "nO\n";
            return;
        }
        else
            m[i + 1] += m[i] / (i + 1);
    }
    cout << "yEs\n";
}
int main()
{

    // long long t;
    // t = 1;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}