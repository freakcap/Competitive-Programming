#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,acnt1,acnt0,bcnt1,bcnt0;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>0 && n<101)
        {
        string a,b;
        cin>>a;
        cin>>b;
        acnt1=0;;
        acnt0=0;
        bcnt1=0;
        bcnt0=0;
        if(a.length()==b.length())
        {
        for(int i=0;i<n;i++)
        {
        if(a[i]=='1')
            {
                acnt1++;
            }
        else if(a[i]=='0')
            {
                acnt0++;
            }
        if(b[i]=='1')
            {
                bcnt1++;
            }
        else if(b[i]=='0')
            {
                bcnt0++;
            }
        }
        
        if(acnt1 != bcnt1 || acnt0!=bcnt0)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
