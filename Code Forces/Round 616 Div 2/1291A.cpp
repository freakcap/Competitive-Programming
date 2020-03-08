#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr;
        ll sum=0;
        int flg=0;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            flg=0;
            int x=s[i]-'0';
            sum+=x;
            arr.push_back(x);
            if(arr[i]%2!=0 && sum %2==0)
            {
                flg=1;
                break;

            }
           
        }
        if(flg==1)
        {
            for(int i=0;i<arr.size();i++)
                cout<<arr[i];
            cout<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
    }
}