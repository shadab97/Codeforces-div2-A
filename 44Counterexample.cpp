#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long

using namespace std;
ll int gcd(ll int a, ll int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
 	ll int l,r;
 	cin>>l>>r;
  if (l % 2 != 0)
      l++;
   
  if (l + 2 > r)
    cout<<-1<<endl;
  else
    cout<<l<<" "<<(l + 1)<<" "<<(l + 2);
   	

    return 0;
}
