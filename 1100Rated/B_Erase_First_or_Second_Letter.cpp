
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define int int64_t
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define fl(s, e) for (int i = s; i < e; i++)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> newchar;
    newchar.push_back(s[0]);
    int cnt = n;
    for(int i = 1; i < n; i++){
        if(find(newchar.begin(), newchar.end(), s[i]) == newchar.end()){
            newchar.push_back(s[i]);
            cnt += n-i;
        }
    }
    cout << cnt << endl;

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