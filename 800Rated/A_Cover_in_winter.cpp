#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n;
    cin >> n;
    vector<char>cell(n);
    for (int i = 0; i < n; i++){
        cin >> cell[i];
    }
    int total_dots = 0;
    int consecutive_dotcount = 0;
    int max_dots = INT_MIN;

    for (int i = 0; i < cell.size(); i++){
        if (cell[i] == '.'){
            total_dots++;
            consecutive_dotcount++;
            if (consecutive_dotcount > max_dots)
            max_dots = consecutive_dotcount;
        }
        else 
        {
            consecutive_dotcount = 0;
        }
    }

    if (max_dots >= 3){
        cout << '2' <<endl;
    }
    else 
    cout << total_dots << endl;
    
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