#include<bits/stdc++.h>
using namespace std;
 
 
#define loopi(n) for ( ll i = 0; i < n; i++)
#define loopi1(n) for (ll i = 1; i <= n; i++)
#define loopj(n) for (ll j = 0; j < n; j++)
#define loopj1(n) for (ll j = 1; i <= n; j++)
#define ll long long int
#define lld long long double
#define e "\n"
#define yeah cout << "YES" << e
#define nah cout << "NO" << e
#define B begin()
#define E end()
#define F first
#define S second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
 

 
 
 
int main()
{
    int t ; cin>>t;
    while (t--)
    {
        int n , f , k;
        cin>>n>>f>>k;
        vector<int> v(n);
        for (int i = 0 ;i<n ; i++) cin>>v[i];
        int fav_number= v[f-1];
        int counter_fav = 0;
        for (int i = 0 ;i<n ; i++)
        {
            if (v[i]==fav_number) counter_fav++;
        }
        sort(v.rbegin(),v.rend());
        int t_counter_fav= counter_fav;
        for (int i = 0 ; i < k ; i++)
        {
            if (v[i]==fav_number) counter_fav--;
        }
        if (counter_fav==0 ) cout<<"YES"<<endl;
        else if (counter_fav==t_counter_fav) cout<<"NO"<<endl;
        else if (counter_fav>0 && counter_fav<t_counter_fav) cout<<"Maybe"<<endl;
    }
}