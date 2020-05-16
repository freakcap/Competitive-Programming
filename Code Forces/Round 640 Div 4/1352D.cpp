#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vi arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        ll alice=0;
        ll bob=0;
        ll tmpA=0;
        ll tmpB=0;
        ll cnt=0;
        ll l = 0;
        ll r = n-1;

        while(l<=r)
        {
            if(cnt%2==0)
            {
                tmpA = arr[l];
                l++;
                while(tmpA<=tmpB)
                {
                    if(l>r) break;
                    tmpA+=arr[l];
                    l++;
                }
                alice+=tmpA;
            }
            else{
                tmpB=arr[r];
                r--;
                while(tmpB<=tmpA)
                {
                    if(l>r) break;
                    tmpB+=arr[r];
                    r--;
                }
                bob+=tmpB;
            }
            cnt++;

        }
        cout<<cnt<<" "<<alice<<" "<<bob<<"\n";
    }
}