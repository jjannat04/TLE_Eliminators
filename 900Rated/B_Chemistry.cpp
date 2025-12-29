#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int len = s.size();
    if (n-k == 0)
        {
            cout << "YES" << endl;
            return;
        }
    sort(s.begin(), s.end());
    //cout << s << endl; 
    int freq[27] = {0};
    for (int i = 0; i < len; i++)
    {
        int ch = s[i];
        freq[ch - 96]++;
    }
    int even_times = 0, odd_times = 0;

    for (int i = 1; i <= 26; i++)
    {
        if (freq[i] > 0)
        {
            char c = i+96;
            //cout << c << ":" << " " << freq[i] << "times" <<endl;
            if (freq[i] % 2 == 0) even_times++;
            else odd_times++;
        }
    }
    if ((n-k) % 2 == 0 && odd_times <= k && (k-odd_times) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if ((n-k) % 2 == 1 && odd_times-1 <= k && (k-odd_times-1) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else 
    {
        cout << "NO" << endl;
        return;
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