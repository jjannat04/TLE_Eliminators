#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) FOR(i, 0, n)
#define REPD(i, n) FORD(i, n, 0)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;
    if (x % k != 0) {
        cout << 1 << endl << x << endl;
    } else {
        cout << 2 << endl;
        int a = x / k;
        cout << (k*a-1) << " " << (x-(k*a-1)) << endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}