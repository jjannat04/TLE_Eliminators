#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int MX = 100000 + 5;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> occ(MX, 0);
    for (int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      occ[x]++;
    }
    int unique_count = 0, a = 0, b = 0;
    for (int i = 0; i < MX; ++i) {
      if (occ[i] > 0) {
        unique_count++;
        if (a == 0) {
          a = occ[i];
        } else {
          b = occ[i];
        }
      }
    }
    if (unique_count >= 3) cout << "No" << endl;
    else if (unique_count == 1) cout << "Yes" << endl;
    else {
      if ((abs(a - b) <= 1)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
