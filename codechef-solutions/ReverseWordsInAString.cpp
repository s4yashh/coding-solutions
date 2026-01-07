string reverseWords(string s)
{
    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Join words with single space
    string result = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (i > 0)
            result += " ";
        result += words[i];
    }

    return result;
}
