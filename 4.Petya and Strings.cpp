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
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	int n=s1.length();
	//converting string to lowercase
	for(int i=0;i<n;i++){
		if(s1[i]>='A' && s1[i]<='Z'){
			s1[i]=s1[i]+32;
		}
		if(s2[i]>='A' && s2[i]<='Z'){
			s2[i]=s2[i]+32;
		}
		if(s1[i]==s2[i]){
			
		}
	}
	int c=0;
	for(int i=0;i<n;i++){
		
		if(s1[i]==s2[i]){
			c=1;
			continue;
		}else if(s1[i]<s2[i]){
			cout<<"-1"<<endl;
			c=0;
			break;
		}else{
			cout<<"1"<<endl;
			c=0;
			break;
		}
	}
	if(c==1){
		cout<<"0"<<endl;
	}

}
