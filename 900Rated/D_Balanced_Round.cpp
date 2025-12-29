#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int mx = 1, curr = 1;

    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) <= k) {
            curr++;
        } else {
            mx = max(mx, curr);
            curr = 1;
        }
    }
    mx = max(mx, curr);

    cout << n - mx << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
