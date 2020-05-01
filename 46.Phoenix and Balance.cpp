#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long

using namespace std;
ll int gcd(ll int a, ll int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
 	int t;
 	cin>>t;
 	while(t--){
 	int n;
 	cin>>n;
 	int arr[n];
	for(int i=1;i<=n;i++){
		arr[i]=pow(2,i);
	}
	int b=0;
	int a=arr[n];
	for(int i=1;i<=(n/2)-1;i++){
		a+=arr[i];
	}
	for(int i=n/2;i<n;i++){
		b+=arr[i];
	}
	


cout<<abs(a-b)<<endl;	

   
}
 return 0;
}
