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
        ll n, c, d;
        cin>>n>>c>>d;
        vector<ll>a(n*n);
        for(ll i=0; i<n*n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll y = a[0];
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll x = y;
            for(ll j=0; j<n; j++)
            {
                v.push_back(x);
                x += d;
            }
            y += c;
        }
        sort(v.begin(), v.end());
        if(v == a) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
