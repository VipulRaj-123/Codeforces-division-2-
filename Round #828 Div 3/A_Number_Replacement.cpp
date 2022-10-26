#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    string s;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    cin >> s;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (a[i] == a[j] && s[i] != s[j])
            {
                cout << "nO\n";
                return;
            }
        }
    }
    cout << "YeS\n";
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