#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string s1="hello";
	int j=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==s1[j]){
			j++;
		}
	}
	if(j==5){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}