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
	
int n,k;
cin>>n>>k;
int f[n];
int t[n];
for(int i=0;i<n;i++){
	cin>>f[i];
	cin>>t[i];
}
int maxe=INT_MIN;
for(int i=0;i<n;i++){

	if(t[i]<=k){
		maxe=max(maxe,f[i]);	
	}else{
		maxe=max(maxe,f[i]-(t[i]-k));
	}
}
cout<<maxe<<endl;
			
		
	return 0;
}
