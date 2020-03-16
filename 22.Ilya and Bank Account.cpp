#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int lastdigit=abs(n%10);
	int secondlastdigit=abs((n/10)%10);
		int lastdigitt=(n%10);
	int secondlastdigitt=((n/10)%10);
	if(n>0){
		cout<<n<<endl;
	}
	else{
		if(secondlastdigit>lastdigit){
			//remove second last
			if(n/100==0){
			
				cout<<lastdigitt<<endl;	
			}else{
				
				cout<<n/100<<lastdigit<<endl;
			}
		
		}else{
			//remove last
			cout<<n/10;
		}
	}

	
return 0;
}
