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
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i]) count++;
    }
    if(count > 0) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
    return 0;
}
