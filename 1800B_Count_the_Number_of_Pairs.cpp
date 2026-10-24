#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, ll>mp;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        ll answer = 0;
        for(char ch = 'A'; ch <= 'Z'; ch++)
        {
            ll a = mp[ch];
            ll b = mp[ch + 32];
            answer += min(a, b);
            ll x = abs(a-b);
            answer += min(k, x/2);
            k -= min(k, x/2);
        }
        cout<<answer<<endl;
    }
    return 0;
}
