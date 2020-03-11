#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	sum/=2;
	int c=0;
	int sum2=0;
	for(int i=0;i<n;i++){
		if(sum2<=sum){
			sum2+=a[i];
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
