#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                c += 1;
            }
        }
        cout << c << endl;
    }
    return 0;
}
