#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a.length()<b.length();
    }
int main()
{
    int t; cin>>t;
    int x=0;
    
    while(t--)
    {
        int n; cin>>n;
        string s[n];
        int maxF=0; int maxL=0;
         int maxx=0; int maxx1=0;
        for(int i=0;i<n;++i) cin>>s[i];
        sort(s,s+n,compare);
        for(int i=0;i<n;i++)
        {
            int cntF(0),cntL(0);
            bool f=true;
            for(int j=0;j<s[i].length();j++)
            {
                if(s[i][j]=='*') f=false;
                if(f) cntF++;
                else cntL++;
            }
            cntL--;
            if(maxx<cntF) {
                maxF=i;
                maxx=cntF;
            }
            if(maxx1<cntL){
              maxL=i;
              maxx1=cntL;
            } 
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=s[i].length()-1;
                int l=s[j].length()-1;
                while(s[i][k]!='*' && s[j][l]!='*')
                {
                    if(s[i][k]!=s[j][l])
                    {
                        flag=true;
                    }
                    k--;
                    l--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=0;
                int l=0;
                while(s[i][k]!='*' && s[j][l]!='*')
                {
                    if(s[i][k]!=s[j][l])
                    {
                        flag=true;
                    }
                    k++;
                    l++;
                }
            }
        }
       
        x++;
        cout<<"Case #"<<x<<": ";
        if(flag) cout<<"*";
        else {
            for(int i=0;i<s[maxF].length();i++)
            {
                if(s[maxF][i]=='*')break;
                
                cout<<s[maxF][i];
            }
            bool flg=false;
            for(int i=0;i<s[maxL].length();i++)
            {
                if(flg)
                cout<<s[maxL][i];
                if(s[maxL][i]=='*')flg=true;
                
            }
        }
        cout<<"\n";
    }
}