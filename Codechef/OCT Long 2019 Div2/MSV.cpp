#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll t,n,cnt,tmp,cnt1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>arr;
        cnt=0;
        
        for(ll i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
        
        for(ll i=arr.size()-1;i>=0;i--)
        {
            cnt1=0;
            
            for(ll j=0;j<i;j++)
            {
                if(arr[j] % arr[i] == 0)
                {
                    cnt1++;
                }
            }
            if(cnt1>cnt)
                cnt=cnt1;
            
            if(cnt1 > i-2)
                break;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}