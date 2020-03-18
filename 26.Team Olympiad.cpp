/*
     ######  ##     ##    ###    ########     ###    ########     #######  ########
    ##    ## ##     ##   ## ##   ##     ##   ## ##   ##     ##   ##     ## ##    ##
    ##       ##     ##  ##   ##  ##     ##  ##   ##  ##     ##   ##     ##     ##
     ######  ######### ##     ## ##     ## ##     ## ########     ########    ##
          ## ##     ## ######### ##     ## ######### ##     ##          ##   ##
    ##    ## ##     ## ##     ## ##     ## ##     ## ##     ##   ##     ##   ##
     ######  ##     ## ##     ## ########  ##     ## ########     #######    ##
 
    happy-coding
    */
#include<iostream>
using namespace std;
int main(){
	int n,i,val;
	cin>>n;
	int arr[n],skill1=0,skill2=0,skill3=0;
	for(i = 0;i<n;i++){
		cin>>val;
		arr[i] = val;
		if(val ==1){
			skill1++;
		}else if(val == 2){
			skill2++;
		}else if(val == 3){
			skill3++;
		}
	}
	int teams = min(min(skill1,skill2),skill3);
	if(teams == 0){
		cout<<0<<endl;
	}
	else{
	int team1[teams],team2[teams],team3[teams],t1=0,t2=0,t3=0;
	for(i = 0;i<n;i++){
		if(arr[i]==1 && t1<teams){
			team1[t1++]=i;
		}
		else if(arr[i]==2 && t2<teams){
			team2[t2++]=i;
		}
		else if(arr[i]==3 && t3<teams){
			team3[t3++]=i;
		}
	}
	cout<<teams<<endl;
	for(i = 0;i<teams;i++){
		cout<<team1[i]+1<<" "<<team2[i]+1<<" "<<team3[i]+1<<endl;
	}
}
	return 0;
}
