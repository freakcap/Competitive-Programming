#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<0<<"\n";
        else
        cout<<b-(a%b)<<"\n";
    }
    return 0;
}