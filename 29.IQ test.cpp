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

int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++){
	cin>>a[i];
}
int aa=a[1]%2;
int bb=a[2]%2;
int cc=a[3]%2;
if((aa==0 && bb==0 && cc==0)||((aa==1 && bb==1 && cc==1))){
	for(int i=4;i<=n;i++){
		if(a[i]%2!=aa){
			cout<<i<<endl;
			break;
		}
	}	
}else{
	if(aa==bb){
		cout<<3<<endl;	
	}
	if(aa==cc){
		cout<<2<<endl;
	}
	if(cc==bb){
		cout<<1<<endl;
	}
}



return 0;
}
