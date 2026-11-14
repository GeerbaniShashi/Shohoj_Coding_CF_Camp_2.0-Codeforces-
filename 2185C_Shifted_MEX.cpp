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
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        vector<ll>v;
        for(auto x: st)
        {
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll count = 1, maximum = INT_MIN;
        for(ll i=0; i<v.size() - 1; i++)
        {
            if(v[i+1]-v[i]==1) count++;
            else
            {
                maximum = max(maximum, count);
                count = 1;
            }
        }
        maximum = max(maximum, count);
        if(v.size()==1) cout<<"1\n";
        else cout<<maximum<<"\n";
    }
    return 0;
}
