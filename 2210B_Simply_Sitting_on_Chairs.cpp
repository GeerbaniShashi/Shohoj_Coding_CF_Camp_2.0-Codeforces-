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
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i] <= i+1) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
