#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int j=0;
	int p=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{	
			i+=2;
			
			if(p==1 && j!=1){
				cout<<" ";
				j=1;
			}
			
			continue;
		}
		else{
			p=1;
			j=0;
			cout<<s[i];
		}	
	}
	return 0;
}
