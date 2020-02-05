#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x(0);
    while(t--)
    {
        cin>>x;
        int sum=0;
        while(x/10!=0)
        {
            int y = (x/10)*10;
            sum=sum+y;
            x = (y/10)+(x%10);
        }

        cout<<sum+x<<"\n";
    }
}