#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>

void solve(){
    int n;
    cin >> n;
    vi a(n);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i] != a[i+1])
        flag = 0;
    }
    if (flag == 1)
    {
        cout << -1 << endl;
    }

    else {
        vi b, c;
        int max_val = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] == max_val) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }
        
        cout << b.size() << " " << c.size() << endl;
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
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