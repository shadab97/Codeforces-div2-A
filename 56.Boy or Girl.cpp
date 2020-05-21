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
	string s;
	cin >> s;
	int a[26] = {0};
	for (int i = 0; i < s.length(); i++) {
		if (a[s[i] - 97] == 0) {
			a[s[i] - 97]++;
		}


	}
	int c = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i]) {
			c++;
		}
	}
	if (c % 2 != 0) {
		cout << "IGNORE HIM!";

	} else {
		cout << "CHAT WITH HER!";

	}

	return 0;
}


