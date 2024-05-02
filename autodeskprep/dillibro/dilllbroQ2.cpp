// a structure is falling in a grid with obstacles we have to stop the obstacles when we encounter a wall( like Tetris game)

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int R, C;
    cin >> R >> C;
    vector<vector<char>> mat(R, vector<char>(C));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> mat[i][j];
        }
    }
    int mi = 1e9;
    for (int j = 0; j < C; j++)
    {
        int fPos = -1;
        for (int i = 0; i < R; i++)
        {
            if (mat[i][j] == 'F')
                fPos = i;
            if (fPos != -1 && mat[i][j] == 'X')
            {
                mi = min(mi, i - fPos - 1);
                fPos = -1;
            }
        }
        if (fPos != -1)
            mi = min(mi, R - fPos - 1);
    }

    vector<vector<char>> ans(R, vector<char>(C, '.'));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (mat[i][j] == 'F')
                ans[i + mi][j] = 'F';
            else if (mat[i][j] == 'X')
                ans[i][j] = mat[i][j];
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    cerr << "\nTime Taken:" << (float)clock() / CLOCKS_PER_SEC << " secs";
    return 0;
}