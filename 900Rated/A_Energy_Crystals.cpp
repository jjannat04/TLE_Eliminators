#include <iostream>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    long long val = 1;
    int p = 0;

    while (val * 2 <= x) {
        val *= 2;
        p++;
    }

    cout << 2*p + 3 << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
