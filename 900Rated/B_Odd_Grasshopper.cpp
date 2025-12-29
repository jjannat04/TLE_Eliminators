#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x0, n;
        cin >> x0 >> n;
        long long r = n % 4;
        long long ans;
        if (r == 0)
            ans = x0;
        else if (r == 1)
        {
            if ((x0 & 1) == 0)
                ans = x0 - n;
            else
                ans = x0 + n;
        }
        else if (r == 2)
        {
            if ((x0 & 1) == 0)
                ans = x0 + 1;
            else
                ans = x0 - 1;
        }
        else
        { 
            if ((x0 & 1) == 0)
                ans = x0 + n + 1;
            else
                ans = x0 - n - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
