#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    map<ll, ll>mp;
    map<ll, ll>::iterator it;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll maximum = INT_MIN;
    for(it = mp.begin(); it!=mp.end(); it++)
    {
        maximum = max(maximum, (*it).second);
    }
    if(maximum <= (n+1)/2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
