#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long

using namespace std;
ll int gcd(ll int a, ll int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
	int n;
    cin >> n;
    string s;
    set<char> x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
            if (i == j or i + j == n - 1)
                x.insert(s[j]);
            else
                y.insert(s[j]);
    }

    if (x.size() == 1 and y.size() == 1 and *x.begin() != *y.begin())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
