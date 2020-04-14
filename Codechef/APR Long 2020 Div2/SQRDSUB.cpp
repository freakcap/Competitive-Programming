#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ; cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]=abs(arr[i]);
        }
       
        ll cnt=0;
        ll barr[n];
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%4==0) barr[i]=0;
            else if(arr[i]%2==0) barr[i]=2;
            else barr[i]=1;
        }
        
        ll itr = 0,idx=0;
        
        bool flag= false;
        for(ll i=0;i<n;i++)
        {
            if(barr[i]==0)
            {
                
                cnt+=(n-i)*abs(i-itr+1);
                flag=false;
                itr = i+1;
            }
            else if(barr[i]==2)
            {
                if(!flag)
                {
                    idx=i;
                    flag=true;
                }
                else{
                    flag=true;
                    cnt+=(n-i)*abs(idx-itr+1);
                    itr=idx+1;
                    idx=i;
                }
            }
        }
        
        ll tmp=0;
        for(ll i=0;i<n;i++)
        {
            if(barr[i]==1)
            {
                tmp++;
                if(i==n-1) cnt+=tmp*(tmp+1)/2;
            }
            else{
                cnt+=tmp*(tmp+1)/2;
                tmp=0;
            }
        }
         cout<<cnt<<"\n";
    }
    return 0;
}


