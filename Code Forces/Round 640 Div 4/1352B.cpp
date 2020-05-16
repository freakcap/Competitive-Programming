#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        if(n%2==0 && k%2!=0 && k*2>n) cout<<"NO\n";
        else if(k>n) cout<<"NO\n";
        else if(n%2==0 && k%2==0)
        {
            cout<<"YES\n";
            while(k!=1)
            {
                cout<<1<<" ";
                n--;
                k--;
            }
            cout<<n<<"\n";
        }   
        else if(n%2==0 && k%2!=0)
        {
           cout<<"YES\n";
            while(k!=1)
            {
                cout<<2<<" ";
                n-=2;
                k--;
            }
            cout<<n<<"\n";
        }   
        else if(n%2!=0 && k%2!=0)
        {
            cout<<"YES\n";
            while(k!=1)
            {
                cout<<1<<" ";
                n-=1;
                k--;
            }
            cout<<n<<"\n";
        }  
        else{
            cout<<"NO\n";
        }
    
    }

}