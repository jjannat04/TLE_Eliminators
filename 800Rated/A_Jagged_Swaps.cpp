#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (arr[0] == 1)
    cout << "YES\n";
    else 
    cout << "NO\n";
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