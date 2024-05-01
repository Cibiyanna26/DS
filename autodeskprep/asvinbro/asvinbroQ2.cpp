// Given two strings s1 and s2
// Of characters between '0' to '9'.For every characters do the addition operation and append to the final string answer.

#include <bits/stdc++.h>
using namespace std;

string suming(string st1, string st2)
{
    int size1 = st1.size();
    int size2 = st2.size();
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size1; i++)
    {
        sum1 += st1[i] - '0';
    }
    for (int j = 0; j < size2; j++)
    {
        sum2 += st2[j] - '0';
    }
    return to_string(sum1 + sum2);
}
int main()
{
    string st1 = "123";
    string st2 = "456";
    string res = suming(st1, st2);
    cout << res;
    return 0;
}