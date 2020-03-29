#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int main()
{
    int t; string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a.length()==1 && b.length()==1)
        {
            cout<<a[0]+b[0]-'0'-'0'<<"\n";
            continue;
        }
        else if(a.length()==1)
        {
            int tmp=(b[0]-'0')*10+b[1]-'0'+a[0]-'0';
            int tmp1=(a[0]-'0')*10+b[1]-'0'+b[0]-'0';
            if(tmp>tmp1)
            {
                cout<<tmp<<"\n";
                continue;
            }
            cout<<tmp1<<"\n";
            continue;
        }
        else if(b.length()==1)
        {
            int tmp=(a[0]-'0')*10+a[1]-'0'+b[0]-'0';
            int tmp1=(b[0]-'0')*10+a[1]-'0'+a[0]-'0';
            if(tmp>tmp1)
            {
                cout<<tmp<<"\n";
                continue;
            }
            cout<<tmp1<<"\n";
            continue;
        }
        else{
            
            int max=INT_MIN;
            int tmp=(a[0]-'0'+b[0]-'0')*10+a[1]-'0'+b[1]-'0';
            if(tmp>max)
            {
                max=tmp;
            }
            // int max=INT_MIN;
            tmp=(b[1]-'0'+b[0]-'0')*10+a[1]-'0'+a[0]-'0';
            if(tmp>max)
            {
                max=tmp;
            }
            // int max=INT_MIN;
            tmp=(a[0]-'0'+a[1]-'0')*10+b[0]-'0'+b[1]-'0';
            if(tmp>max)
            {
                max=tmp;
            }
            cout<<max<<"\n";
    }
    }
    return 0;
}