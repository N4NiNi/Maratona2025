#include <bits/stdc++.h>
using namespace std;
int n,a[2000010],t;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		n=unique(a+1,a+1+n)-a-1;
		int p=0;
		for(int i=n;i;i--){
			if(a[i-1]+1==a[i]) p^=1;
			else p=1;
		}
		puts(p?"Alice":"Bob");
	}
	return 0;
}
		    			 	 	  					  					 	 	