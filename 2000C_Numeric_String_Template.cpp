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
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            ll x = s.length();
            if(n != x) cout<<"NO\n";
            else
            {
                map<ll, char>mp1;
                map<char, ll>mp2;
                for(ll i=0; i<n; i++)
                {
                    mp1[a[i]] = s[i];
                    mp2[s[i]] = a[i];
                }
                ll ok = true;
                for(ll i=0; i<n; i++)
                {
                    if(mp1[a[i]] == s[i] && mp2[s[i]] == a[i]) continue;
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}
