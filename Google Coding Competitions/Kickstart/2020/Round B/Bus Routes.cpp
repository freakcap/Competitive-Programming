#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll findNum(ll N, ll K) 
{ 
    ll rem = N % K; 
  
    if (rem == 0) 
        return N; 
    else
        return N - rem; 
} 

int main()
{
    ll t; cin>>t;
    ll x = 0;
    while(t--)
    {
        ll n; cin>>n;
        ll d; cin>>d;
        vector<ll>check(n);
        for(int i=0;i<n;i++) cin>>check[i];
        
        for(int i = check.size()-1;i>=0;i--)
        {
            d = findNum(d,check[i]);
        }
        
        x++;
        cout<<"Case #"<<x<<": "<<d;
        cout<<"\n";
    }
}