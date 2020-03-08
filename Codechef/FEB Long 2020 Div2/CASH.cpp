#include<bits/stdc++.h>
#define ll long long 
#define vi vector<long long>
#define pb push_back
using namespace std;

int main()
{
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vi arr;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr.pb(x);
        }
        
        ll curr=0;
        
        for(auto x : arr)
        {
            ll tmp = x % k;
            ll tmp1 = k - tmp;
            
            if(x==0)
                continue;
            if(tmp < tmp1 || curr<tmp1)
            {
                curr+=tmp;
            }
            else{
                curr-=tmp1;
            }
        }
        
        cout<<curr % k <<"\n";
    }
    
    
    
    return 0;
}