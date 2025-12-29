#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = arr[i] % 2;
    }
    for (int i = 0; i < n; i++)
    {
        if(i < n - 1 && arr[i] == arr[i+1])
        {
            arr[i+1] = arr[i]*arr[i+1];
            arr.erase(arr.begin() + i);
            n--;
            i--;
            result++ ;
        }
    }

    

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
