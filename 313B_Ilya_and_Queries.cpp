#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n = s.length();
    vector<ll>v;
    v.push_back(0);
    ll count = 0;
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]) count++;
        v.push_back(count);
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l, r;
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<"\n";
    }
    return 0;
}
