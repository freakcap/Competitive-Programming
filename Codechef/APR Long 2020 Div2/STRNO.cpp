#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;


bool fac(ll n, ll k) 
{ 
    
    vector<ll> x; 
 
    while (n%2 == 0) 
    { 
        x.push_back(2); 
        n /= 2; 
    } 
     
    for (ll i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            x.push_back(i); 
        } 
    } 
  
    if (n > 2) 
        x.push_back(n); 
  
    if (x.size() < k)
        return false;
    else return true;
} 


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k; cin>>x>>k;
        if(fac(x,k)) cout<<1<<endl;
        else cout<<0<<endl;
        
    }
    return 0;
}
