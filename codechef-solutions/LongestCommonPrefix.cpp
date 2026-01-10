// question: https://www.codechef.com/practice/course/strings/STRINGS/problems/LONGESPREFIX
string longestCommonPrefix(const vector<string> &strs)
{
    if (strs.empty())
        return "";
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        while (strs[i].compare(0, prefix.length(), prefix) != 0)
        {
            prefix.pop_back();
            if (prefix.empty())
                return "";
        }
    }
    return prefix;
}
