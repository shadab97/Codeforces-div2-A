#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int i,j;
    cin>>i>>j;
    if(i==j){
    	if(i%2==0){
    		cout<<"Malvika"<<endl;
		}else{
		cout<<"Akshat"<<endl;	
		}
	}
	if(i>j){
    	if(j%2==0){
    		cout<<"Malvika"<<endl;
		}else{
			cout<<"Akshat"<<endl;
		}
	}
	if(i<j){
    	if(i%2==0){
    		cout<<"Malvika"<<endl;
		}else{
			cout<<"Akshat"<<endl;
		}
	}
    
 return 0;   
}
