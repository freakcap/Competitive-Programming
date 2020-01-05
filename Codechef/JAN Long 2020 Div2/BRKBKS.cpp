#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t,s,w1,w2,w3;
    cin>>t;
    while(t--)
    {
        cin>>s>>w1>>w2>>w3;
        if(s>=6)
        {
            cout<<1<<"\n";
            continue;
        }
        
        if(w1+w2+w3<=s)
        {
            cout<<1<<"\n";
        }
        else if (s>=w1+w2 || s>=w2+w3)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<3<<"\n";
        }
    }
    
    return 0;
}