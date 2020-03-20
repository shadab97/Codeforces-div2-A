#include <bits/stdc++.h>
using namespace std;
 
int MAIN()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			bool haveSnake = false;
			if(i % 2 == 1) haveSnake = true;
			else
			{
				if(i % 4 == 2) haveSnake = (j == m);
				if(i % 4 == 0) haveSnake = (j == 1);
			}
			cout << (haveSnake ? "#" : ".");
		}
		cout << endl;
	}
	return 0;
}
 
int main()
{
	ios :: sync_with_stdio(false);
	cout << fixed << setprecision(16);
	return MAIN();
}
