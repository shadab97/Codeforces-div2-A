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
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    getline(cin,s);//
    int n=s.length();
    set<int> a;
    for(int i=0;i<n;i++){
    	if(s[i]==','||s[i]=='{'||s[i]=='}'||s[i]==' '){
    		continue;
		}else{
			a.insert(s[i]);
		}
	}
	cout<<a.size()<<endl;
return 0;
}
