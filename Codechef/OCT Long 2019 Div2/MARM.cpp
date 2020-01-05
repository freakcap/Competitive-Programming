#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll t,n,k,tmp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector <ll> arr;
        for(ll i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
        
        for(ll i=0;i<k;i++)
        {
            tmp=i%n;
            arr[tmp] = arr[tmp] ^ arr[n-tmp-1];
        }
        
        for(ll i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}