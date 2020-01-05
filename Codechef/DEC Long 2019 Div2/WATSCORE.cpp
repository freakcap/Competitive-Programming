#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t,n,p,s,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[9]={0};
        sum=0;
        while(n--)
        {
            cin>>p>>s;
            if(p<=8 && a[p]<s)
            {
                a[p]=s;
            }
        }
        
        for(int i=1;i<=8;i++)
        {
            sum=sum+a[i];
        }
        
        cout<<sum<<"\n";
    }
    return 0;
}