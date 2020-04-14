#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int gcd(int a,int b)
{
    if( a==0)return b;
    return gcd(b%a,b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vi x;
        x.pb(1);
        int tmp = n/2;
        if(n/2==0)tmp+=1;
        cout<<tmp<<"\n";
        if(n==1)
        {
            cout<<1<<" "<<1<<"\n";
        }
        else
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                x.pb(i);
                if(i+1<=n)
                x.pb(i+1);
                cout<<x.size();
                for(int q:x) cout<<" "<<q;
                cout<<"\n";
                x.clear();
            }
        }
    }
    return 0;
}