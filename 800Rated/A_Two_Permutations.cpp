#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    if ( (a+b) >= n - 1)
    {
        if (a==n && b == n)
        cout << "Yes" << endl;
        else 
        cout << "No" << endl;
    }
    else 
    cout << "Yes" << endl;
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