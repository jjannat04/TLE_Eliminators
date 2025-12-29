#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int isbeautiful(vi arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == sum) {
            return 0; 
        }
        sum += arr[i];
    }
    return 1; 
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isbeautiful(arr, n)) {  
        cout << "YES\n";
        for (int x : arr) cout << x << " ";
        cout << "\n";
        return;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    
    if (isbeautiful(arr, n)) {  
        cout << "YES\n";
        for (int x : arr) cout << x << " ";
        cout << "\n";
        return;
    }

    swap(arr[0], arr[n-1]);
    
    if (isbeautiful(arr, n)) {  
        cout << "YES\n";
        for (int x : arr) cout << x << " ";
        cout << "\n";
        return;
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
