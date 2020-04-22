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
int main(){
int n,v;
cin>>n>>v;
int to=0;
int arr[n];
for(int i=1;i<=n;i++){
	arr[i]=0;
}
for(int t=1;t<=n;t++){
	int item;
	cin>>item;
	int a[item];
	for(int i=0;i<item;i++ ){
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<item;i++ ){
		if(v>a[i]){
			count=1;
			break;
		}
	}
	if(count){
		to++;
		arr[t]=t;
	}	
}
cout<<to<<endl;
if(to){
for(int i=1;i<=n;i++ ){
	if(arr[i]!=0){
	cout<<arr[i]<<" ";	
	}
	
}	
}



}

