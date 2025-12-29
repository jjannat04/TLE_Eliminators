#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    ll n, q;
    cin >> n >> q;
    vi a(n);
    vector<ll> prefix(n + 1, 0);  
    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        prefix[i + 1] = sum;  
    }
    ll temp = sum;

    ll l, r, k;
    while (q--) {
        cin >> l >> r >> k;

        ll segment_sum = prefix[r] - prefix[l - 1];

        ll new_segment_sum = (r - l + 1) * k;
        sum = sum - segment_sum + new_segment_sum;

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        sum = temp; 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
