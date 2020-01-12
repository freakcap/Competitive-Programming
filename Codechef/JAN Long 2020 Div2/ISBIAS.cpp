#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n,q,l,r,count,count1;
    int pair(0),pair1(0);
    ll x;
    cin>>n>>q;
    vector<ll>a;
    for(int i=0;i<n;i++){
        cin>>x;    
        a.push_back(x);
    }
    int k=0;
    int z=0;
    int dp[n]={0};
    int dp1[n]={0};
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i] && dp1[i]!=0)
            dp1[i+1]=k;
        else if(a[i+1]>a[i])
        {
            k++;
            dp1[i+1]=k;
        }
        else dp1[i+1]=0;

        if(a[i+1]<a[i] && dp[i]!=0)
            dp[i+1]=z;
        else if(a[i+1]<a[i])
        {
            z++;
            dp[i+1]=z;
        }
        else dp[i+1]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(dp1[i+1]<dp1[i])
            dp1[i+1]=dp1[i];
        if(dp[i+1]<dp[i])
            dp[i+1]=dp[i];
    }

    while(q--)
    {
        cin>>l>>r;
        
        if(a[l-1]>a[l] && dp[l-1]==dp[l] && dp[l]!=0)
            pair = dp[r-1]-dp[l-1]+1;
        else 
            pair = dp[r-1]-dp[l-1];
       
        if(a[l-1]<a[l] && dp1[l-1]==dp1[l] && dp1[l]!=0)
            pair1 = dp1[r-1]-dp1[l-1]+1;
        else 
            pair1 = dp1[r-1]-dp1[l-1];
    
        if(pair==pair1 && pair!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        // for(int i=0;i<n;i++)
        // {
        //     cout<<dp[i]<<"--"<<dp1[i]<<endl;
        // }
        pair=0;
        pair1=0;
    }

}