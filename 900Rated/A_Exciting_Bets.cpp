#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define int int64_t

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (a < b)
        swap(a, b);
    int g = a - b;
    int opt = min(a % g, g - (a % g));

    cout << g << " " << opt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}