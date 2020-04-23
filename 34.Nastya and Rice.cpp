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
	int t;
	cin>>t;
	while(t--){
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		int as=a-b;
		int al=a+b;
		int cs=c-d;
		int cl=c+d;
		if(a==0 && b==0 && c==0 && d==0 || c==0 && d==0 || a==0 && b==0){
			cout<<"No"<<endl;
		}
		else if(n*al<cs || n*as>cl){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}
