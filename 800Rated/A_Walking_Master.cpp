#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b<=d&&c<=a+d-b)
    cout << (d-b) + (a+(d-b)-c) << endl;
    else 
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}