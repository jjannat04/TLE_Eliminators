#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vi temp = arr;
    sort(arr.begin(), arr.end());
    if (arr == temp){
        cout << "YES\n";
    }
    else {
        if (k > 1){
            cout << "YES\n";
        }
        else 
        cout << "NO\n";
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