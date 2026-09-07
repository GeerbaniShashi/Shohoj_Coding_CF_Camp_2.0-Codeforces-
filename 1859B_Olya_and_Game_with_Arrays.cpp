#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll m;
        cin>>m;
        vector<ll>v1, v2;
        while(m--)
        {
            ll n;
            cin>>n;
            ll a[n];
            for(ll i=0; i<n; i++)
            {
                cin>>a[i];
                v1.push_back(a[i]);
            }
            sort(a, a+n);
            v2.push_back(a[1]);
        }
        ll sum = 0;
        for(ll i=0; i<v2.size(); i++)
        {
            sum += v2[i];
        }
        sort(v2.begin(), v2.end());
        sum -= v2[0];
        sort(v1.begin(), v1.end());
        sum += v1[0];
        cout<<sum<<endl;
    }
    return 0;
}
