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
bool isvovel(char c){
	if(c=='Y'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
		return true;
	}else{
		return false;
	}
}
int main(){
		string s;
		cin>>s;
		int l=s.length();
		for(int i=0;i<l;i++){
			if(isvovel(s[i])){
				continue;
			}
			if(s[i]>='A' && s[i]<='Z'){
				s[i]=s[i]+32;
			}
			cout<<"."<<s[i];
		}
	return 0;
}
