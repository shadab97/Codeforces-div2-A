#include<bits/stdc++.h>
using namespace std;
void pairsort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int s,n;
	cin>>s>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	pairsort(a,b,n);
	int c=0;
	for (int i = 0; i < n; i++){
		if(s<=a[i]){
			c=1;
			break;
		}
		else{
			
			s+=b[i];
		}
	}
	if(c==1){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
        
}

