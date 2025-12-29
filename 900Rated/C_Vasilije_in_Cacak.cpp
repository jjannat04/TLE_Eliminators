#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll max_sum = n*(n+1)/2 - (n-k)*(n-k+1)/2;
    ll min_sum = k*(k+1)/2;
    if (x >= min_sum && x <= max_sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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