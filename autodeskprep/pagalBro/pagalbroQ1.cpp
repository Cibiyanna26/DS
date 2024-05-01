//  Find the first index (i), where the sum from 0 th index to that index i will be greater than target.

#include <iostream>
#include <vector>

using namespace std;

int findTargetSumIndex(const vector<int> &arr, int target)
{
    int currentSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];
        if (currentSum > target)
        {
            return i;
        }
    }
    // Target not found within the array
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int target = 6;
    int index = findTargetSumIndex(arr, target);

    if (index != -1)
    {
        cout << "First index where sum is greater than " << target << " is: " << index << endl;
    }
    else
    {
        cout << "Target sum not found within the array." << endl;
    }

    return 0;
}
