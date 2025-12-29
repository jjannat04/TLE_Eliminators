#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<ll>
 
void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    int ans = b;
	for(ll i = 0, x = 0 ; i < n ; i ++){
		cin >> x;
		ans += min(a - 1, x);
	}
	cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}