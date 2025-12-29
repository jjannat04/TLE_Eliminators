
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
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    vector<int> freq(26, 0);
    for (int i = 0; i < m; i++)
        freq[t[i] - 'A']++;

    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[s[i] - 'A'] > 0)
            freq[s[i] - 'A']--;
        else
            s[i] = '.';
    }

    string final_string = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            final_string += s[i];
    }

    if (final_string == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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