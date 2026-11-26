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
    ll a[n+1], b[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]] = i;
    }
    ll q;
    cin>>q;
    ll vasya = 0, petya = 0;
    while(q--)
    {
        ll x;
        cin>>x;
        ll index = b[x];
        vasya += index;
        petya += (n - index + 1);
    }
    cout<<vasya<<" "<<petya<<"\n";

    return 0;
}
