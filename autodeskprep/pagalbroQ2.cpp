// Given  string ,you can reverse from beginning or from end, find the lexicographically smallest string we can get after 1 operation.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string findSmallestReversed(string str)
{
    string smallest = str;
    string reversedEntire = str;
    reverse(reversedEntire.begin(), reversedEntire.end());

    smallest = min(smallest, reversedEntire);

    for (int i = 1; i < str.length() - 1; i++)
    {
        string suffix = str.substr(i);
        reverse(suffix.begin(), suffix.end());
        string temp = str.substr(0, i) + suffix;
        smallest = min(smallest, temp);
    }

    return smallest;
}

int main()
{
    string str = "abdc";
    string smallestReversed = findSmallestReversed(str);
    cout << "Smallest String after reversing: " << smallestReversed << endl;
    return 0;
}