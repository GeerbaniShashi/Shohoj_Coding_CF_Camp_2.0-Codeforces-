#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum = 0;
    vector<ll>v;
    for(ll i=0; i<k; i++)
    {
        sum += a[i];
    }
    v.push_back(sum);
    for(ll i=k; i<n; i++)
    {
        sum += a[i];
        sum -= a[i-k];
        v.push_back(sum);
    }
    ll index = -1;
    ll minimum = INT_MAX;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i] < minimum)
        {
            minimum = v[i];
            index = i+1;
        }
    }
    cout<<index<<"\n";
    return 0;
}
