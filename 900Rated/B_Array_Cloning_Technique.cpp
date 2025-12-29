
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define int int64_t
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define fl(s, e) for (int i = s; i < e; i++)


void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> freq;

    fl(0, n)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    ll distinct = 0;
    ll mx = INT32_MIN;
    for (auto i : freq)
    {
        if (i.second > mx)
            mx = i.second;
    }
    ll op = 0;
    while (mx < n)
    {
        op++;
        if (mx * 2 <= n)
        {
            op += mx;
            mx *= 2;
        }
        else
        {
            op += n - mx;
            mx = n;
        }
    }
    cout << op << endl;
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