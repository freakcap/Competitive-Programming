#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        int sum1=0;
        int sum0=0;
        vector<int>arr;
        vector<int>bits;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
            sum+=x;
            if(x%2==0)
            {
                bits.push_back(0);
                sum0++;
            }
            else {
                bits.push_back(1);
                sum1++;
            }
        }
        if(sum%2!=0)
        {
            cout<<"YES\n";
            continue;
        }
        else {
            if(sum1==n || sum0==n)
            {
                cout<<"NO\n";
                continue;
            }
            else
            {
                cout<<"YES\n";
                continue;
            }
            
        }
    }
}