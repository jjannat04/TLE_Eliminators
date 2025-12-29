#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;

        string s;
        n = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
                if (((s[i] - '0') * 10 + (s[j] - '0')) % 25 == 0)
                    n = s.size() - i - 2;
        }
        cout << n << endl;
    }
}