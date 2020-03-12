#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n][2];
  for(int i=0;i<n;i++){
  	for(int j=0;j<2;j++){
  		cin>>a[i][j];
	  }
  }
  int c=0;
  for(int i=0;i<n;i++){
  	for(int j=i;j<n-1;j++){
  		if(a[i][0]==a[j+1][1]){
  			c++;
		}
		if(a[i][1]==a[j+1][0]){
  			c++;
		}
	  }
  }
  cout<<c<<endl;
  
}

