#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int x,y,k;
       cin>>x>>y>>k;
       x=min(x,y);
       cout<<0<<" "<<0<<" "<<x<<" "<<x<<endl;
       cout<<0<<" "<<x<<" "<<x<<" "<<0<<endl;
   }

    return 0;
}