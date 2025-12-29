#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve(){
    int64_t n;
    cin >> n;
    
    if (n & (n - 1)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
