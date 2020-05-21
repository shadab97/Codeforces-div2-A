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
	int x = 0;
	while (t--) {
		string s;
		cin >> s;
		if (s == "X++" || s == "++X") {
			x++;
		} else if (s == "X--" || s == "--X") {
			x--;
		}

	}
	cout << x;

	return 0;
}


