

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
	int n;
	cin >> n;
	int k;
	cin >> k;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] >= a[k] && a[i] != 0) {
			c++;
		}
	}
	cout << c;
	return 0;
}


