
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, m, a;
	cin >> n >> m >> a;
	cout << ((m + a - 1) / a)*((n + a - 1) / a);


	return 0;
}


