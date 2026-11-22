#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    set<ll>st;
    vector<ll>v;
    for(ll i=n-1; i>=0; i--)
    {
        st.insert(a[i]);
        ll x = st.size();
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    while(m--)
    {
        ll l;
        cin>>l;
        cout<<v[l-1]<<"\n";
    }
    return 0;
}
