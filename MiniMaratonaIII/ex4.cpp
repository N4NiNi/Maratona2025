#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char a;
        int num=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>a;
                if(a=='X'){
                    num += min(min(i,10-i+1),min(j,10-j+1));
                }
                
            }
        }
        cout<<num<<endl;
    }
    return 0;
}