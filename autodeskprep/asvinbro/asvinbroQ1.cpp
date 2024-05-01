// Given 4 arrays A, B, C, Signs, of same length. The signs array contains '+', '-'.
// For every element in A and B do the operation in signs array(additon or subtraction) and 
// check it is equal to the element of C array means return or else false

#include <bits/stdc++.h>
using namespace std;
bool sign(int A[], int B[], char Sign[], int C[], int n)
{
    int res;
    for (int i = 0; i < n; i++)
    {
        if (Sign[i] == '+')
        {
            res = A[i] + B[i];
        }
        else
        {
            res = A[i] - B[i];
        }
        if (res != C[i])
            return false;
    }
    return true;
}
int main()
{
    int A[] = {1, 2, 3};
    int B[] = {4, 5, 6};
    char Signs[] = {'+', '-', '+'};
    int C[] = {5, -1, 9};
    int n = sizeof(A) / sizeof(A[0]);
    if (sign(A, B, Signs, C, n))
        cout << "YES";
    cout << "no";
    return 0;
}