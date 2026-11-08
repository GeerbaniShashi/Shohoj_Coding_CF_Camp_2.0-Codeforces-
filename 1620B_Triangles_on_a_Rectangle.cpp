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
        ll w, h;
        cin>>w>>h;
        ll maximum = INT_MIN;

        ll a;
        cin>>a;
        ll y1[a];
        for(ll i=0; i<a; i++)
        {
            cin>>y1[i];
        }
        sort(y1, y1+a);
        maximum = max(maximum, (y1[a-1]-y1[0]) * h);

        ll b;
        cin>>b;
        ll y2[b];
        for(ll i=0; i<b; i++)
        {
            cin>>y2[i];
        }
        sort(y2, y2+b);
        maximum = max(maximum, (y2[b-1]-y2[0]) * h);

        ll c;
        cin>>c;
        ll x1[c];
        for(ll i=0; i<c; i++)
        {
            cin>>x1[i];
        }
        sort(x1, x1+c);
        maximum = max(maximum, (x1[c-1] - x1[0]) * w);

        ll d;
        cin>>d;
        ll x2[d];
        for(ll i=0; i<d; i++)
        {
            cin>>x2[i];
        }
        sort(x2, x2+d);
        maximum = max(maximum, (x2[d-1] - x2[0]) * w);

        cout<<maximum<<"\n";
    }
    return 0;
}
