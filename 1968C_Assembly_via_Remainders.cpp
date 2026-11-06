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
        ll x[n-1];
        for(ll i=0; i<n-1; i++)
        {
            cin>>x[i];
        }
        ll a[n];
        a[0] = 1000;
        for(ll i=0; i<n-1; i++)
        {
            a[i+1] = a[i] + x[i];
        }
        for(ll i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
