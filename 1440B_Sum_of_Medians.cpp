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
        ll n, k;
        cin>>n>>k;
        ll a[(n*k)];
        for(ll i=0; i<n*k; i++)
        {
            cin>>a[i];
        }
        ll sum = 0;
        ll median = (n/2) + 1;
        ll index = (n*k) - median;
        for(ll i=0; i<k; i++)
        {
            sum = sum + a[index];
            index -= median;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
