#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	int ii=0,jj=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==1){
				ii=i;
				jj=j;
				break;		
			}
		}
	}
	int count=0;
	while(ii!=2){
		if(ii>2){
			ii--;
			count++;
		}else{
			ii++;
			count++;
		}
	}
	while(jj!=2){
		if(jj>2){
			jj--;
			count++;
		}else{
			jj++;
			count++;
		}
	}
	cout<<count<<endl;
	
}
