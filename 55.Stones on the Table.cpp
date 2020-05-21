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
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < t - 1; i++) {
		if (s[i] == s[i + 1]) {
			c++;
		}
	}
	cout << c;
	return 0;
}


