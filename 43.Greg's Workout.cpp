#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long

using namespace std;
int gcd(int a, int b){ return a == 0 ? b : gcd(b % a, a); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	}
		int chest=0;
		int biceps=0;
		int back=0;	

		for(int i=0;i<n;i++){
	 		if(i%3==0){
	 			chest+=arr[i];
			}
			if(i%3==1){
	 			biceps+=arr[i];
			}
			if(i%3==2){
	 			back+=arr[i];
			}
		}	
		
	if(chest>biceps && chest> back){
		cout<<"chest"<<endl;
	}
	else if(biceps>chest && biceps> back){
		cout<<"biceps"<<endl;
	}else{
		cout<<"back"<<endl;
	}
	
	
   	

    return 0;
}
