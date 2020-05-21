

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
	int t;
	cin >> t;
	int ans = 0;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1 && b == 1) {
			ans++;
		}
		else if (a == 1 && c == 1) {
			ans++;
		}
		else if (c == 1 && b == 1) {
			ans++;
		} else {

		}

	}
	cout << ans;

	return 0;
}


