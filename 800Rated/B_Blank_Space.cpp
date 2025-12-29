#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n;
    cin >> n;
    int arr[n];
    int count0 = 0, max0 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        count0++;
        else 
        count0 = 0;

        if (max0 < count0)
        max0 = count0;
    }
    cout << max0 << endl;
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