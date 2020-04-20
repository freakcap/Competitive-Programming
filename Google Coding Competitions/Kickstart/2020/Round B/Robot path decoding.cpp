#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const ll M = 1000000000;

int main()
{
    ll t; cin>>t;
    ll x = 0;
    while(t--)
    {
        string s; cin>>s;
        stack<ll>st;
        // unordered_map<char,ll>mp;
        st.push(1);
        ll h=1;
        ll w=1;
        for(char q : s)
        {
            if(q=='N')
            {
                // mp['N']+=st.top();
                h-=st.top();
                
            }
            else if(q=='S')
            {
                // mp['S']+=st.top();
                  h+=st.top();
            }
            else if(q=='W')
            {
                // mp['W']+=st.top();
                  w-=st.top();
            }
            else if(q=='E')
            {
                // mp['E']+=st.top();
                  w+=st.top();
            }
            else if(q>'0' && q<='9')
            {
                st.push((q-'0')*st.top());
            }
            else if(q==')')
            {
                st.pop();
            }
            
            if(h>M) h=h%M;
            if(w>M) w=w%M;
            if(h<0) h=M+h;
            if(w<0) w=M+w;
            if(h==0) h=M;
            if(w==0) w=M;
        }
        
        // ll h = mp['S']-mp['N'];
        // ll w = mp['E']-mp['W'];
        // h++; w++;
        // if(h>0)
        // h=h%M;
        // else{
        //     h=(abs(h)%M)*-1;
        //     h=M+h;)
        // }
        // if(w>0)
        // w=w%M;
        // else{
        //     w=(abs(w)%M)*-1;
        //     w=M+w;
        // }
        
        // if(h==0) h=M;
        // if(w==0) w=M;
        
        
        
        x++;
        cout<<"Case #"<<x<<": "<<w<<" "<<h;
        cout<<"\n";
    }
}