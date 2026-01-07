#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    while (test--)
    {
        string s, t;
        cin >> s >> t;
        string m = "";
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == t[i])
            {
                m += "G";
            }
            else
            {
                m += "B";
            }
        }
        cout << m << endl;
    }
    return 0;
}
