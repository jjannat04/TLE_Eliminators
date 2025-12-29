#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (n % i != 0)
        {
            cout << i-1 << endl;
            return;
        }
    }
    cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}