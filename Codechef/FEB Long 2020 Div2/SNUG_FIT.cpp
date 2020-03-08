#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        long long sum=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
                sum+=a[i];
            else{
                sum+=b[i];
            }
        }
        // for(auto i=a.begin();i!=a.end();++i)
        // {
        //     for(auto j=b.begin();j!=b.end();++j)
        //     {
        //         if(*i < *j)
        //         {
        //             cout<<".."<<*i<<".."<<*j;
        //             sum+=*i;
        //         }
        //         else{
        //             cout<<".."<<*i<<".."<<*j;
        //             sum+=*j;
        //         }
        //     }
        // }
        
        cout<<sum<<"\n";
    }
    
    
    
    return 0;
}