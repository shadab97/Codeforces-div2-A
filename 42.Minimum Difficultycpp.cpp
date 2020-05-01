#include <bits/stdc++.h>

#define for0(n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend()// backword traversal

#define vi vector<int>
#define ll long long

using namespace std;
int gcd(int a, int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
   	int n;
   	cin>>n;
   	int arr[n];
   	for0(n){
   		cin>>arr[i];
	}
	int maxdis=-1;
	for0(n-1){
   		if(abs(arr[i]-arr[i+1])>maxdis){
   			maxdis=abs(arr[i]-arr[i+1]);
		   }
	}
	int mindis=10000;
	for(int i=1;i<n-1;i++){
		if(abs(arr[i+1]-arr[i-1])<mindis){
			mindis=abs(arr[i+1]-arr[i-1]);
		}
	}
	if(mindis<maxdis){
		cout<<maxdis<<endl;

	}else{
		cout<<mindis<<endl;
	}
	
	
   	

    return 0;
}
