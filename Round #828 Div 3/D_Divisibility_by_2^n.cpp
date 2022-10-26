#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long ans = 0, c = n;
    vector<long long> p(n + 1, 0);
    // fu(i, 1, n)
    for(long long i = 1; i<=n; i++)
    {
        long long a;
        cin >> a;
        while (a % 2 == 0)
        {
            c--;
            a /= 2;
        }
        a = i;
        while (a % 2 == 0)
        {
            p[i]++;
            a /= 2;
        }
    }
    if (c > 0)
    {
        sort(p.begin(), p.end(), greater<long long>());
        for (long long i = 0; p[i] > 0 && c > 0; i++)
        {
            ans++;
            c -= p[i];
        }
    }

    if (c > 0)
        cout << "-1\n";
    else
        cout << ans << "\n";
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