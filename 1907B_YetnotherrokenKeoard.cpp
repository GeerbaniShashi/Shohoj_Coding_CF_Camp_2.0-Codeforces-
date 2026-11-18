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
        string s;
        cin>>s;
        ll n = s.length();
        vector<ll>small, capital;
        vector<bool>ok(n, true);
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='b')
            {
                if(!small.empty())
                {
                    ok[small.back()] = false;
                    small.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i]=='B')
            {
                if(!capital.empty())
                {
                    ok[capital.back()] = false;
                    capital.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                small.push_back(i);
            }
            else
            {
                capital.push_back(i);
            }
        }
        for(ll i=0; i<ok.size(); i++)
        {
            if(ok[i])
            {
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
