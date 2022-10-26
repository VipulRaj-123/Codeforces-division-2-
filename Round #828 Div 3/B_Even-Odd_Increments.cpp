#include <bits/stdc++.h>
// this code or template is made solely by me...
#define aimzfff
using namespace std;

void solve()
{
    long long n, q;
    cin >> n >> q;
    long long ari = 0;
    long long odd = 0, even = 0;
    while (n--)
    {
        long long a;
        cin >> a;
        ari += a;
        odd += (a % 2);
        even += (a % 2 == 0);
    }
    while (q--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == 1)
        {
            ari += (b * odd);
            if (b % 2 == 1)
            {
                even += odd;
                odd = 0;
            }
        }
        else if (a == 0)
        {
            ari += (b * even);
            if (b % 2 == 1)
            {
                odd += even;
                even = 0;
            }
        }
        cout << ari << "\n";
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