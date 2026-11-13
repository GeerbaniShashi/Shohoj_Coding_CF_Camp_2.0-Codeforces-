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
        ll x[n], y[n];
        for(ll i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        ll minimum = INT_MAX;
        for(ll i=0; i<n; i++)
        {
            ll answer = x[i] + ((y[i]-1)/2);
            minimum = min(minimum, answer);
        }
        cout<<minimum<<"\n";
    }
    return 0;
}
