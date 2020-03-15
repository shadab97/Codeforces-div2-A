#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,a,b;
cin>>n>>m>>a>>b;
int c=m;
int cnt=1;
if(n<m && a<b){
	cout<<min(a*n,b)<<endl;
}
else if(a*m>=b){
	while(c<n){
		c+=m;
		cnt++;
	}
	if(a>=b){
	int mm=cnt*b;
	cout<<mm<<endl;
	}
	else{
	cnt--;
	int mm=cnt*b;
	int dif=n-cnt*m;
	int ss=dif*a;
	int ans=mm+ss;
	cout<<ans<<endl;	
	}

}

else{
	cout<<n*a<<endl;
}
return 0;
}

