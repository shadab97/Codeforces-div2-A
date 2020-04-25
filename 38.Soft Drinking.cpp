#include <iostream>

using namespace std;

int main()
{
    int t, k, l, c, d, p, nl, np;
    cin >> t >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / t << endl;
    return 0;
}