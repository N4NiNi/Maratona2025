#include<bits/stdc++.h>
using namespace std;
int t,n,x,y;
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y;
		cout<<max((y+1)/2,(4*y+x+14)/15)<<"\n";
	}
	return 0;
}