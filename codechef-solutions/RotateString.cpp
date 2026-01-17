#include <string>
using namespace std;

bool canRotate(string s, string goal)
{
    // Lengths must be equal
    if (s.length() != goal.length())
        return false;

    // Check if goal is a substring of s + s
    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}
