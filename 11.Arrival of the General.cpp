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
	int n;
	cin>>n;
	int a[n];
	int min=100;
	int max=1;
	int ii=0;
	int jj=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
			jj=i;
		}
		if(a[i]<=min){
		min=a[i];
		ii=i;	
		}
	}
	int val=n-ii;
	if(ii<jj){
		
		val+=jj-2;	
	}
	else{
		val+=jj-1;
	}
	cout<<val;
	return 0;
}
