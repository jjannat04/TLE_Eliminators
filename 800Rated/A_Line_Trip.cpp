#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n,x;
    cin >> n >> x;
    vi stations(n);
    for (int i = 0; i < n; i++){
        cin >> stations[i];
    }
    int stops = ((2*(n+1))+1);
    vector <int> total_stops;
    total_stops.push_back(0);

    total_stops.insert(total_stops.begin()+1, stations.begin(), stations.end());
    total_stops.push_back(x);
    reverse(stations.begin(), stations.end());
// 0 1 2 5 7 5 2 1 0
// 0 1 2 3 4 5 6 7 8
    total_stops.insert(total_stops.begin()+(n+2), stations.begin(), stations.end());

    total_stops.push_back(0);

    // for (int i = 0; i < stops; i++){
    //     cout << total_stops[i] << " ";
    // }
    int maximum = INT16_MIN;
    for (int i = 0; i < stops-1; i++){
        int diff = abs(total_stops[i] - total_stops[i+1]);
        if (diff > maximum)
        maximum = diff;
    }
    maximum = max(maximum,(2*(x-total_stops[n])));
    cout << maximum <<endl;



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