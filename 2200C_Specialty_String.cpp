#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        for(ll i=0; i<n; i++)
        {
            if(!st.empty() && st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
