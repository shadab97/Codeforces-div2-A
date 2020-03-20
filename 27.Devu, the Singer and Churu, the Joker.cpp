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

int n,d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int sum=0;
for(int i=0;i<n;i++){
	sum+=a[i];
}
int total=sum +((n-1)*10);
if(total<=d){
	int ans=(d-sum)/5;
	cout<<ans<<endl;
	
}
else{
	cout<<-1;
}
return 0;
}
