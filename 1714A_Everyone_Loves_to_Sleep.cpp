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
        ll n, h, m;
        cin>>n>>h>>m;
        ll hour[n], minute[n];
        for(ll i=0; i<n; i++)
        {
            cin>>hour[i]>>minute[i];
        }
        ll answer = h*60 + m;
        ll value;
        ll minimum = INT_MAX;
        bool ok = false;
        for(ll i=0; i<n; i++)
        {
            if(h == hour[i] && m == minute[i])
            {
                ok = true;
                break;
            }
            ll x = hour[i]*60 + minute[i];
            if(answer >= x)
            {
                value = x + (24*60) - answer;
            }
            else
            {
                value = x - answer;
            }
            minimum = min(minimum, value);
        }
        if(ok) cout<<"0 0\n";
        else cout<<(minimum/60)<<" "<<(minimum%60)<<"\n";
    }
    return 0;
}
