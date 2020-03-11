#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	for(int j=0;j<n-1;j++){
			for(int i=0;i<n-1;i++){
				if(s[i]=='+'){	
					continue;
				}
				if(s[i]>s[i+2]){	
					swap(s[i],s[i+2]);
				}	
		}
	}
	cout<<s<<endl;
		
	return 0;
}
