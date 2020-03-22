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
#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
char a[r][c];
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>a[i][j];	
	}
}
int col=0,row=0;
for(int i=0;i<r;i++){
	int cnt=0;
	for(int j=0;j<c;j++){
		if(a[i][j]=='.'){
			cnt++;
		}	
	}
	if(c==cnt){
		row++;
	}
}
for(int i=0;i<c;i++){
	int cntx=0;
	for(int j=0;j<r;j++){
		if(a[j][i]=='.'){
			cntx++;
		}	
	}
	if(r==cntx){
		col++;
	}
}
cout<<(row*c+col*r)-row*col;

}
