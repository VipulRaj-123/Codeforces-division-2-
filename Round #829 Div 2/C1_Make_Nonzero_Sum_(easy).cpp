#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i=0; i<n; i++) cin >> a[i];
    if (n & 1)
    {
        cout << "-1\n";
        return;
    }
    vector<pair<long long, long long>> p;
    for (long long i = 0; i < n; i += 2)
    {
        if (a[i] == a[i + 1])
            p.push_back({i + 1, i + 2});
        else
        {
            p.push_back({i + 1, i + 1});
            p.push_back({i + 2, i + 2});
        }
    }
    cout << p.size() << "\n";
    for(long long i=0; i<p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << "\n";
    }
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