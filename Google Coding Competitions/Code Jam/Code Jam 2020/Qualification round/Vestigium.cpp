#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int main()
{
    ll t; cin>>t;
    ll k,n,r,c;
    ll x = 0;
    while(t--)
    {
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) cin>>arr[i][j];
        k=0,r=0,c=0;
        for(int i=0;i<n;i++) k+=arr[i][i];
        
        for(int i=0;i<n;i++)
        {
            ll tmp[n+1]={0};
            for(int j=0;j<n;j++) 
            {
                tmp[arr[i][j]]++;
                if(tmp[arr[i][j]]>1) 
                {
                    r++;
                    break;
                }                    
            }
            
            ll tmp1[n+1]={0};
            for(int j=0;j<n;j++) 
            {
                tmp1[arr[j][i]]++;
                if(tmp1[arr[j][i]]>1) 
                {
                    c++;
                    break;
                }                    
            }
        }
        
        x++;
        cout<<"Case #"<<x<<": "<<k<<" "<<r<<" "<<c<<"\n";
    }
    return 0;
}