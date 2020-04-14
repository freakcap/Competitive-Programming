#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    int x(0);
    while(t--)
    {
        int brac=0;
        string s; cin>>s;
        x++;
        cout<<"Case #"<<x<<": ";
        for(char c:s)
        {
            int ic = c-'0';
            if(brac<ic)
            {
                for(int i=0;i<ic-brac;i++) cout<<"(";
                cout<<c;
                brac=ic;
            }
            else{
                for(int i=0;i<brac-ic;i++) cout<<")";
                cout<<c;
                brac=ic;
            }
        }
        while(brac--) cout<<")";
        cout<<"\n";
    }
    return 0;
}