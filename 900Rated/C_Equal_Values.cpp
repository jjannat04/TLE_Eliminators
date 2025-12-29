#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll mincost = LLONG_MAX;

    int i = 0;
    while (i < n) {
        int start = i;

        while (i < n-1 && a[i + 1] == a[start]) {
            i++;
        }

        int end = i; 

        ll value = a[start];
        int left = start;           
        int right = n - 1 - end;    

        ll cost = value * (left + right);
        mincost = min(mincost, cost);

        i++; 
    }

    cout << mincost << endl;
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
