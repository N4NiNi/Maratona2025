#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a1,b;
        cin>>a1>>b;
        int a[b];
        for(int i=0;i<b;i++){
            cin>>a[i];
        }
        sort(a,a+b);
        int sum=0;
        for(int i=0;i<b-1;i++){
            sum+=2*(a[i]-1);
        }
        cout<<sum+b-1<<endl;
    }
    return 0;
}