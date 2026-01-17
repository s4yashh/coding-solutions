#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    int freq[26] = {0};

    // Count characters in s
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    // Subtract characters in t
    for (char c : t)
    {
        freq[c - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }

    return true;
}
