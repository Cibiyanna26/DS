//  given a grid, find the + shaped sign where all elements are same.

#include <iostream>
#include <vector>

using namespace std;

bool findPlusSignBruteForce(vector<vector<int>> grid)
{
    int rows = grid.size();
    int cols = grid[0].size();

    // Iterate through each element as the center
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int centerValue = grid[i][j];

            // Check Up, Down, Left, Right
            bool isPlus = true;
            int upLimit = i - 1;
            int downLimit = i + 1;
            int leftLimit = j - 1;
            int rightLimit = j + 1;

            // Check Up
            while (upLimit >= 0 && grid[upLimit][j] == centerValue)
            {
                upLimit--;
            }
            if (upLimit >= 0)
            {
                isPlus = false;
                break;
            }

            // Check Down
            while (downLimit < rows && grid[downLimit][j] == centerValue)
            {
                downLimit++;
            }
            if (downLimit < rows)
            {
                isPlus = false;
                break;
            }

            // Check Left
            while (leftLimit >= 0 && grid[i][leftLimit] == centerValue)
            {
                leftLimit--;
            }
            if (leftLimit >= 0)
            {
                isPlus = false;
                break;
            }

            // Check Right
            while (rightLimit < cols && grid[i][rightLimit] == centerValue)
            {
                rightLimit++;
            }
            if (rightLimit < cols)
            {
                isPlus = false;
                break;
            }

            // If all directions match, a "+" is found
            if (isPlus)
            {
                return true;
            }
        }
    }

    // No "+" shaped sign found
    return false;
}

int main()
{
    vector<vector<int>> grid = {{1, 1, 1, 1}, {1, 2, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 2}};
    if (findPlusSignBruteForce(grid))
    {
        cout << "Plus sign with all elements the same found!" << endl;
    }
    else
    {
        cout << "No plus sign found." << endl;
    }
    return 0;
}
