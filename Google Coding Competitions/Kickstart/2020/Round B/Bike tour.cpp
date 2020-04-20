#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t; cin>>t;
    ll x = 0;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>check(n);
        for(int i=0;i<n;i++) cin>>check[i];
        ll ans = 0;
        if(n<3) ans=0;
        else for(int i=1;i<n-1;++i) if(check[i]>check[i+1] && check[i]>check[i-1]) ans++;
        x++;
        cout<<"Case #"<<x<<": "<<ans;
        cout<<"\n";
    }
}