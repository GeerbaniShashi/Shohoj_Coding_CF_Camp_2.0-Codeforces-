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
        ll n, q;
        cin>>n>>q;
        ll a[n], b[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll x[n];
        for(ll i=0; i<n; i++)
        {
            x[i] = max(a[i], b[i]);
        }
        for(ll i=n-2; i>=0; i--)
        {
            x[i] = max(x[i], x[i+1]);
        }
        ll prefix[n+1];
        prefix[0] = 0;
        for(ll i=0; i<n; i++)
        {
            prefix[i+1] = prefix[i] + x[i];
        }
        while(q--)
        {
            ll l, r;
            cin>>l>>r;
            ll sum = prefix[r] - prefix[l-1];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
