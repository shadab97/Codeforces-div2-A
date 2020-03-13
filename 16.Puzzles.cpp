#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++){
	cin>>a[i];
}
sort(a,a+m);

int dif=1001;
for(int i=0;i<=m-n;i++){
	int min=1001,max=0;
	for(int j=i;j<i+n;j++){
		if(a[j]<=min){
			min=a[j];
		}
		if(a[j]>=max){
			max=a[j];
		}		
	}
//	cout<<max-min<<"="<<max<<"-"<<min<<endl;
	if(abs(max-min)<dif){
		dif=abs(max-min);
		
	}
		
}
cout<<dif<<endl;


return 0;
}

