#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    
    int t,n,a,c0,c1,sum;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        c1=0;
        c0=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==2)
                c1++;
            else if(a==0)
                c0++;
        }
        
        sum=0;
        sum=(c1*(c1+1)/2)-c1;
        sum=sum+(c0*(c0+1)/2)-c0;
        
        cout<<sum<<"\n";
    }
    
    
    
    return 0;
}