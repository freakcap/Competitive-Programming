#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define endl "\n"
using namespace std;

void solve(ll n)
{
   if(n<4) 
   {
       cout<<"-1"<<endl;
       return;
   }
   for(ll i=n;i>=1;i--)if(i&1)cout<<i<<" ";
    cout<<4<<" "<<2<<" ";
    if(n<=5)
    {
        cout<<endl;
        return;
    }
    for(int i=6;i<=n;i++)if(!(i&1))cout<<i<<" ";
    cout<<endl;
    return;
}

int main()
{
    ll t,x; x=0;
    cin>>t;
    
    while(t--)
    {
        ll n; cin>>n;
        solve(n);
    }
}