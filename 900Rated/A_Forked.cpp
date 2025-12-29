#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

void solve() {
    int a, b;
    cin >> a >> b;
    int xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;

    set<pii> king, queen;
    
    king.insert({xk + a, yk + b});
    king.insert({xk + a, yk - b});
    king.insert({xk - a, yk + b});
    king.insert({xk - a, yk - b});
    king.insert({xk + b, yk + a});
    king.insert({xk + b, yk - a});
    king.insert({xk - b, yk + a});
    king.insert({xk - b, yk - a});
    
    queen.insert({xq + a, yq + b});
    queen.insert({xq + a, yq - b});
    queen.insert({xq - a, yq + b});
    queen.insert({xq - a, yq - b});
    queen.insert({xq + b, yq + a});
    queen.insert({xq + b, yq - a});
    queen.insert({xq - b, yq + a});
    queen.insert({xq - b, yq - a});
    
    int common = 0;
    for (auto p : king)
        if (queen.count(p))
            common++;

    cout << common << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
