
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define int int64_t
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define fl(s,e) for(int i=s;i<e;i++)
 
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    if(s[0] == s[n-1]){
        cout << s << endl;
    }
    else {
        s[0] = 'a';
        s[n-1] = 'a';
        cout << s << endl;
    }

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