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
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        ll index = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout<<index<<"\n";
    }
    return 0;
}
