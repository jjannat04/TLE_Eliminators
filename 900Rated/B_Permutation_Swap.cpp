#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int g = 0;

    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {  
            int diff = abs(p[i] - (i + 1)); 
            g = __gcd(g, diff);
        }
    }

    cout << g << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
