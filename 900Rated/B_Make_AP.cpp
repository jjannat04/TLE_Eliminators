
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define int int64_t
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define fl(s,e) for(int i=s;i<e;i++)
 
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
     int new_a = 2*b - c;
    if(new_a >= a && new_a % a == 0 && new_a != 0) {
        cout << "YES\n";
        return;
    }

    int new_b = a + (c - a)/2;
    if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
        cout << "YES\n";
        return;
    }

    int new_c = a + 2*(b - a);
    if(new_c >= c && new_c % c == 0 && new_c != 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
    return;

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