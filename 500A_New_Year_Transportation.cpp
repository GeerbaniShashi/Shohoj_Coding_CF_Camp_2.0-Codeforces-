#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, t;
    cin>>n>>t;
    ll a[n-1];
    for(ll i=0; i<n-1; i++) cin>>a[i];
    ll current_index = 0;
    while(current_index < t-1)
    {
        current_index += a[current_index];
    }
    if(current_index == t-1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
