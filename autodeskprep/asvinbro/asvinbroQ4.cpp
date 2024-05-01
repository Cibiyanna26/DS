// given array of integers find pairs which is difference of one character and has same number of digits

#include <bits/stdc++.h>
using namespace std;

bool isPairValid(int num1, int num2)
{
    // Check if the absolute difference between the numbers is one
    if (abs(num1 - num2) != 1)
    {
        return false;
    }

    // Check if the two numbers have the same number of digits
    int digits_num1 = log10(num1) + 1;
    int digits_num2 = log10(num2) + 1;

    return digits_num1 == digits_num2;
}

void findPairsWithDifferenceAndDigits(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (isPairValid(arr[i], arr[j]))
            {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << std::endl;
            }
        }
    }
}

int main()
{
    vector<int> numbers = {12, 23, 45, 56, 89, 9, 10, 21 , 20};
    findPairsWithDifferenceAndDigits(numbers);

    return 0;
}