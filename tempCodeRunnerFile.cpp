/*
     ######  ##     ##    ###    ########     ###    ########     #######  ########
    ##    ## ##     ##   ## ##   ##     ##   ## ##   ##     ##   ##     ## ##    ##
    ##       ##     ##  ##   ##  ##     ##  ##   ##  ##     ##   ##     ##     ##
     ######  ######### ##     ## ##     ## ##     ## ########     ########    ##
          ## ##     ## ######### ##     ## ######### ##     ##          ##   ##
    ##    ## ##     ## ##     ## ##     ## ##     ## ##     ##   ##     ##   ##
     ######  ##     ## ##     ## ########  ##     ## ########     #######    ##
 
    happy-coding
    */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = true;
    for (int i = 1; i <= n && flag; ++i)
    {
        int cnt = 0;
        for (int j = 1; j <= n; ++j)
        {
            if (arr[j - 1][i] == 'o')
            {
                cnt++;
            }

            if (arr[j + 1][i] == 'o')
            {
                cnt++;
            }
            if (arr[j][i - 1] == 'o')
            {
                cnt++;
            }
            if (arr[j][i + 1] == 'o')
            {
                cnt++;
            }
            if (cnt % 2 != 0)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}