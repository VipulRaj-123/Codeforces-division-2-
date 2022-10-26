#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    char c;
    string s;
    cin >> n >> c;
    cin >> s;
    s = s + s;
    long long last_green = 0, res = 0;
    for (long long i = 2 * n; i >= 0; --i)
    {
        if (s[i] == 'g')
            last_green = i;
        if (s[i] == c)
            res = max(res, last_green - i);
    }
    if (s[0] == 'g' && c == 'g')
        cout << "0\n";
    else
        cout << res << "\n";
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