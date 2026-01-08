void findLargestOddSubstring(string num)
{
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int digit = num[i] - '0';
        if (digit % 2 == 1)
        {
            cout << num.substr(0, i + 1) << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

// write your code here...
