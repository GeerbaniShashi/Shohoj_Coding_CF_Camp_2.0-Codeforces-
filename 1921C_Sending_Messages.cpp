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
        ll n, f, a, b;
        cin>>n>>f>>a>>b;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool ok = false;
        for(ll i=0; i<n; i++)
        {
            ll x;
            if(i == 0) x = arr[i]*a;
            else x = (arr[i]-arr[i-1])*a;
            ll minimum = min(x, b);
            f = f - minimum;
            if(f <= 0)
            {
                ok = true;
                break;
            }
        }
        if(ok) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
