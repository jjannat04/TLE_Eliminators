#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n;
    cin >> n;
    vi a(n);
    int flag = 1;
    int plus = 0, minus = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            plus++;
        }
        else if (a[i] < 0)
        {
            minus++;
        }
    }
    int temp = plus;
    while (minus > plus)
    {
        plus++;
        minus--;
    }
    if (minus % 2 != 0)
    {
        minus--;
        plus++;
    }
    cout << plus - temp << endl;
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