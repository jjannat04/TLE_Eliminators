#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    int64_t n, p;
    cin >> n >> p;
    vector<pair<int64_t, int64_t>> v(n);
    for (int64_t i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }
    for (int64_t i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    sort(v.begin(), v.end(), [](const pair<int64_t, int64_t> &a, const pair<int64_t, int64_t> &b)
        {
            if (a.first != b.first) {
                return a.first < b.first; 
            } else {
                return a.second > b.second; 
            } 
        }
    );
    //for (auto i:v) cout << "people: " << i.second << " " << "cost: " << i.first<<endl;


    int64_t cost = p;
    int64_t people = 1;
    int64_t i = 0;
    if (n == 1)
    {
        cout << p << endl;
        return;
    }

    while (v[i].first < p)
    {
        people += v[i].second; // 7
        cost += v[i].second * v[i].first; // 13
        if (people == n)
            break;
        if (people > n)
        {
            cost -= v[i].first * (people - n);
            people = n;
            break;
        }
        i++;
    }
    cost += p * (n - people);
    cout << cost << endl;
}

int main()
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