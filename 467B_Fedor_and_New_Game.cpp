#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[m+1];
    for(ll i=0; i<m+1; i++)
    {
        cin>>a[i];
    }
    ll fedor = a[m];
    ll count = 0;
    for(ll i=0; i<m; i++)
    {
        ll x = __builtin_popcount(a[i] ^ fedor);
        if(x <= k) count++;
    }
    cout<<count<<"\n";
    return 0;
}
