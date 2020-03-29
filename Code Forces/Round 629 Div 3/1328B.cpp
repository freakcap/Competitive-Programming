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
        int n,k;
        cin>>n>>k;
        int sum=0,tmp=0;
        for(int i=1;;i++)
        {
            sum+=i;
            tmp++;
            if(k<=sum)
            {
                break;
            }
        }
        int bpos1=n-tmp;
        int bpos2=bpos1+(sum-k)+1;

        for(int i=1;i<=n;i++)
        {
            if(i==bpos1 || i==bpos2)
            cout<<"b";
            else
            cout<<"a";
        }
        cout<<"\n";

    }
    return 0;
}