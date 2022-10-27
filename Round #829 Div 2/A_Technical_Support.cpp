#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n;
    string s;
    cin >> n >> s;
    long long q = 0, a = 0;
    if (s[n - 1] == 'Q')
    {
        cout << "no\n";
        return;
    }
    else
    {
        // long long f = 0;
        fd(i, n - 1, 0)
        {
            if (s[i] == 'A')
                a++;
            else
                q++;
            if (q > a)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YEs\n";
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