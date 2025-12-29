#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sz=0, sz1 = 0;
    int mx = -1, mx1 = -1;
    for(int i = 0; i < s.size(); i++)
    {
        while(s[i] == '>')
        {
            sz++;
            i++;
        }
        mx = max(mx, sz);
        sz = 0;
        
    }
    //cout << "> : " << mx << endl;
    for(int i = 0; i < s.size(); i++)
    {
        while(s[i] == '<')
        {
            sz1++;
            i++;
        }
        mx1 = max(mx1, sz1);
        sz1 = 0;
        
    }
    //cout << "< :" << mx1 << endl;
    cout << max(mx, mx1)+1 << endl;
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