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
        ll p[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>p[i];
        }
        vector < ll > v;
        for(ll i = 0; i < n; i++)
        {
            if(p[i] == i+1) continue;
            else
            {
                ll answer = abs(p[i]-(i+1));
                v.push_back(answer);
            }
        }
        ll k = v[0];
        for(ll i = 1; i < v.size(); i++)
        {
            k = __gcd(k, v[i]);
        }
        cout<<k<<"\n";
    }
    return 0;
}
