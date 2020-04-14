#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<ll>
using namespace std;

ll const M = 998244353;
char XOR[4][4] = {{'0','1','a','A'},{'1','0','A','a'},{'a','A','0','1'},{'A','a','1','0'}};
char AND[4][4] = {{'0','0','0','0'},{'0','1','a','A'},{'0','a','a','0'},{'0','A','0','A'}};
char OR[4][4] = {{'0','1','a','A'},{'1','1','1','1'},{'a','1','a','1'},{'A','1','1','A'}};

string POST(string s) 
{ 
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        if(s[i]== '#') 
            ns+=s[i]; 
        else if(s[i] == '(') st.push('(');  
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
    else{ 
            while(st.top() != 'N' && (st.top() =='&' || st.top() =='|' || st.top()=='^') ) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    }   
    // cout<<ns;
    return ns; 
} 

ll inverse(ll n, ll m) { 
    int in = m; 
    int y = 0, x = 1; 
    if (m == 1) 
    return 0; 
    while (n > 1) { 
        int q = n / m; 
        int t = m;
        m = n % m, n = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
    x += in; 
    return x; 
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string L; cin>>L;
        stack< vi >S;
        string exp = POST(L); 
        // cout<<exp;
        for(int i=0;i<exp.length();++i)
        {
            if(exp[i]=='#') 
            {
                vi tmp ;
                tmp.pb(1); tmp.pb(1); tmp.pb(1); tmp.pb(1);
                S.push(tmp);
            }
            else if(exp[i]=='&')
            {
                vi x = S.top(); S.pop();
                vi x1 = S.top(); S.pop();
                ll cnt0=0,cnt1=0,cnta=0,cntA=0;
                ll tp[4][4];
                for(int j=0;j<4;++j)
                {
                    for(int k=0;k<4;++k)
                    {
                        tp[j][k] = (x[j]*x1[k])%M;
                        if(AND[j][k]=='0') cnt0=(cnt0+tp[j][k])%M;
                        else if(AND[j][k]=='1') cnt1=(cnt1+tp[j][k])%M;
                        else if(AND[j][k]=='a') cnta=(cnta+tp[j][k])%M;
                        else if(AND[j][k]=='A') cntA=(cntA+tp[j][k])%M;
                    }
                }
                vi tmp1;
                tmp1.pb(cnt0); tmp1.pb(cnt1); tmp1.pb(cnta); tmp1.pb(cntA);
                S.push(tmp1);
            }
            else if(exp[i]=='|')
            {
                vi x = S.top(); S.pop();
                vi x1 = S.top(); S.pop();
                ll cnt0=0,cnt1=0,cnta=0,cntA=0;
                ll tp[4][4];
                for(int j=0;j<4;++j)
                {
                    for(int k=0;k<4;++k)
                    {
                        tp[j][k] = (x[j]*x1[k])%M;
                        if(OR[j][k]=='0') cnt0=(cnt0+tp[j][k])%M;
                        else if(OR[j][k]=='1') cnt1=(cnt1+tp[j][k])%M;
                        else if(OR[j][k]=='a') cnta=(cnta+tp[j][k])%M;
                        else if(OR[j][k]=='A') cntA=(cntA+tp[j][k])%M;
                    }
                }
                vi tmp1;
                tmp1.pb(cnt0); tmp1.pb(cnt1); tmp1.pb(cnta); tmp1.pb(cntA);
                S.push(tmp1);
            }
            else if(exp[i]=='^')
            {
                vi x = S.top(); S.pop();
                vi x1 = S.top(); S.pop();
                ll cnt0=0,cnt1=0,cnta=0,cntA=0;
                ll tp[4][4];
                for(int j=0;j<4;++j)
                {
                    for(int k=0;k<4;++k)
                    {
                        tp[j][k] = (x[j]*x1[k])%M;
                        if(XOR[j][k]=='0') cnt0=(cnt0+tp[j][k])%M;
                        else if(XOR[j][k]=='1') cnt1=(cnt1+tp[j][k])%M;
                        else if(XOR[j][k]=='a') cnta=(cnta+tp[j][k])%M;
                        else if(XOR[j][k]=='A') cntA=(cntA+tp[j][k])%M;
                    }
                }
                vi tmp1;
                tmp1.pb(cnt0); tmp1.pb(cnt1); tmp1.pb(cnta); tmp1.pb(cntA);
                S.push(tmp1);
            }
        }  

        vi tmp2 = S.top(); S.pop();
        ll sum=0;
        for(int i=0;i<4;i++)sum=(sum+tmp2[i]%M)%M;
        sum = inverse(sum, M);
    	sum%=M;
        for(int i=0;i<3;i++)
        {
            cout<<(tmp2[i]%M * sum%M)%M<<" ";
        }
        cout<<(tmp2[3]%M * sum%M)%M<<"\n";
    }
    return 0;
}



