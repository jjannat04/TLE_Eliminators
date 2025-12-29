#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define int int64_t

int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int n, d;
    cin >> n >> d;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int team = 0, teamsize = 1;
    int l = -1, r = n-1;
    while(l<r){
        if ((a[r] * teamsize) <= d && l < r)
        {
            teamsize++;
            l++;
        }
        else {
        teamsize = 1;
        //cout << l << r  << endl;
        team++;
        r--;
        }

        
    }
    cout << team;
    return 0;
}