#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define int int64_t
 
void solve(){
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int rem = n-1;
    for (int i = 0; i < n; i++){
        sum = a[i];
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            


        }
    }
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