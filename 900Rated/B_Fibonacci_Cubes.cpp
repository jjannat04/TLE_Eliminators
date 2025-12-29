#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
int fib[12] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233};
void solve()
{
    int n, m;
    cin >> n >> m;
    vi fibn(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        fibn[i] = fib[i];
        sum += fib[i];
    }
    while (m--)
    {
        vi dim(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> dim[i];
        }
        sort(dim.begin(), dim.end());
        int h;
        if (fibn[n - 1] <= dim[0] && fibn[n - 1] <= dim[1])
        {
            h = dim[2];
        }

        else if (fibn[n - 1] <= dim[2] && fibn[n - 1] <= dim[1])
        {
            h = dim[0];
        }
        else if(fibn[n - 1] <= dim[2] && fibn[n - 1] <= dim[0]){
            h = dim[1];

        }
        else {
            cout << 0;
            continue;
        }

        //cout << "h is: " << h << endl;

        if (sum <= h)
            cout << 1;
        else {
            //complete
        }
            
    }
    cout << endl;
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
