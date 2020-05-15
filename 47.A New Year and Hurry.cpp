#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int start,int end,int s){   
    while(end-start>1){
        int mid = start + ((end - start) / 2);
        if(a[mid]>=s){
            end=mid;
        }else if(a[mid]<s){
            start=mid;
        }
    }
    if(a[start]==s){
        return start;
    }else if(a[end]==s){
        return end;
    }else{
        return start;
    }
}
int main()
 {
     int n;
     int time;
     cin>>n>>time;
     int timeForQ=240-time;
     if(timeForQ<5){
     	cout<<0<<endl;
     	return 0;
	 }
     int a[10];
     int sum=0;
     for(int i=1;i<10;i++){
		 a[i]=sum+i*5;
		 sum=a[i];
	 }
	 int ss=bs(a,1,10,timeForQ);
     if(n>ss){
     	cout<<ss<<endl;
	 }else if(n<=ss){
	 	cout<<n<<endl;
	 };
	return 0;
}

