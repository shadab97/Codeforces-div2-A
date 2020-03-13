#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    vector<int> v(6);
    v[0] = a + b * c;
    v[1] = a * (b + c);
    v[2] = a * b * c;
    v[3] = (a + b) * c;
    v[4] = a * b + c;
    v[5] = a + b + c;
    int max = 0;
    for(int i = 0 ; i < 6 ; ++i)
        if(v[i] > max)
            max = v[i];
    cout << max;
    return 0;
	
	return 0;
}
