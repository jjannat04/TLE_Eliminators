#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    ll n;
    cin >> n;
    if (n&1 || n<4){
        cout << -1 << endl;
        
    }
    else {
        ll minbus = ceil(n*1.0/ 6);
        ll mxbus = n/4;
        cout << minbus << " " << mxbus << endl;
    }

}

int main()
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