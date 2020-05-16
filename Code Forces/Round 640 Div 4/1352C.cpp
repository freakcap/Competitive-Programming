#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        
        if(k<n){
             cout<<k<<"\n";
             continue;
        }
        else if(k==n)
        {
            cout<<n+1<<"\n";
            continue;
        }

        ll ans = k + (int)(k/n);
        ll x =(int)(ans/n)-(int)(k/n);
        ll y;
        while(x!=0)
        {
         y= (int)(ans/n);   
        ans = ans + x;
        x =(int)(ans/n)-y;
        }
        cout<<ans<<"\n";
    }

}