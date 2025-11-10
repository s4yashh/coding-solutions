// question link: https://leetcode.com/problems/sorting-the-sentence/
// approach: store words in a vector at index equal to the number at the end of each word, then merge them into a single string
class Solution
{
public:
    string sortSentence(string s)
    {
        stringstream s1(s);
        string word;
        vector<string> words(10);
        while (s1 >> word)
        {
            int pos = word.back() - '0';
            word.pop_back();
            words[pos] = word;
        }
        string result;
        for (int i = 1; i <= 9; i++)
        {
            if (!words[i].empty())
            {

                if (!result.empty())
                    result += " ";
                result += words[i];
            }
        }
        return result;
    }
};
