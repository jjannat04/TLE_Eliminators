#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    ll zero = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zero++;
    }

    if (zero == n)
    {
        cout << 0 << endl;
        return;
    }

    ll found_zero = false;
    ll l = 0, r = n - 1;

    while (a[l] == 0)
        l++;
    while (a[r] == 0)
        r--;

    for (ll i = l; i <= r; i++)
        if (a[i] == 0)
            found_zero = true;

    if (found_zero == false)
        cout << 1;
    else
        cout << 2;

    cout << endl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}