/*
     ######  ##     ##    ###    ########     ###    ########     #######  ########
    ##    ## ##     ##   ## ##   ##     ##   ## ##   ##     ##   ##     ## ##    ##
    ##       ##     ##  ##   ##  ##     ##  ##   ##  ##     ##   ##     ##     ##
     ######  ######### ##     ## ##     ## ##     ## ########     ########    ##
          ## ##     ## ######### ##     ## ######### ##     ##          ##   ##
    ##    ## ##     ## ##     ## ##     ## ##     ## ##     ##   ##     ##   ##
     ######  ##     ## ##     ## ########  ##     ## ########     #######    ##
 
    happy-coding
    */
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
		int n,c;
		cin>>n>>c;
		int arr[n];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		int max=0;
		int pos=0;
		for(int i=1;i<n;i++){
			if(arr[i]-arr[i+1]>=max){
				max=arr[i]-arr[i+1];
				pos=i;
			}
		}
		if(max<=0){
			cout<<0<<endl;
		}else{
			if(arr[pos]-arr[pos+1]-c<=0){
				cout<<0<<endl;
			}else{
				cout<<arr[pos]-arr[pos+1]-c<<endl;
			}
		}
		
			
		
	return 0;
}
