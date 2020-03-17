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
 #include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long int n,k;
	cin>>n>>k;
	long long int ans=0;
	long long int mid;
	if(n%2==0){
	 mid=(n/2);	
	}else{
	mid=(n+1)/2;
	}

	if(k<=mid){
		ans=k+(k-1);
	}else{
		ans=k+((k-mid)-mid);
	}
	cout<<ans;
	return 0;
}
