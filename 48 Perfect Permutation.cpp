
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if (n % 2 != 0) {
		cout << "-1" << endl;
		return 0;
	} else {
		int arr[n];
		for (int i = 1; i <= n; i++) {
			arr[i] = i;
		}
		for (int i = 1; i < n; i++) {
			if (2 * i <= n) {
				swap(arr[2 * i - 1], arr[2 * i]);
			}

		}
		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}
	}


	return 0;
}

