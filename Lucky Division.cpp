#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t=n;
	int c=0;
	while(t){
		if((t%10)==4||(t%10)==7){
			c=1;
			t/=10;
		}else{
			c=0;
			break;	
		}
	}

	if(c==1){
		cout<<"YES"<<endl;
	}
	else{
		if(n%4==0||n%7==0||n%47==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
