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
ios_base::sync_with_stdio(0);
int n;
cin>>n;
int rr[n];
for(int i=1;i<=n;i++){
	rr[i]=0;
}
int p;
cin>>p;
int a[p];
for(int i=1;i<=p;i++){
	cin>>a[i];
}
int q;
cin>>q;
int b[q];
for(int i=1;i<=q;i++){
	cin>>b[i];
}

for(int i=1;i<=p;i++){
	rr[a[i]]++;
	
}

for(int i=1;i<=q;i++){
	rr[b[i]]++;
}
int c=0;
for(int i=1;i<=n;i++){
	if(rr[i]>0){
		c=1;
	}else{
		c=0;
		break;
	}
}
if(c==0){
	cout<<"Oh, my keyboard!"<<endl;
}else{
	cout<<"I become the guy."<<endl;
}
 return 0;   
}
