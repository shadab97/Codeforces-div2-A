#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long

using namespace std;
ll int gcd(ll int a, ll int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
 	int n;
 	cin>>n;
 	char arr [n][n];
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 		cin>>arr[i][j];	
		}
	 	
	}
	char dig=arr[0][0];
	int d=0;
	
	char ndig1=arr[0][1];
	char ndig2=arr[1][0];
	int cntndi=0;
	
if(ndig1!=ndig1){
	cout<<"NO";
	return 0;
}
	
	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			if(i==j || i+j==n){
 				if(dig==arr[i][j]){
 					d=1;
				 }else{
				 	d=0;
				 	break;
				 }
					
			} 	
		}
	}
	
	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			if(i==j || i+j==n){
 				if(i==j || i+j==n){
 					
				 }
 				else if(arr[i][j]==ndig1){
 					cntndi=1;
				 }else{
				 	cntndi=0;
				 	break;
				 }
					
			} 	
		}
	}
	if(d==0||cntndi==0){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	
    return 0;
}
