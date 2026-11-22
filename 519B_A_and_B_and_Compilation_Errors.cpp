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
    ll a[n], b[n-1], c[n-2];
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        sum1 += a[i];
    }
    for(ll i=0; i<n-1; i++)
    {
        cin>>b[i];
        sum2 += b[i];
    }
    for(ll i=0; i<n-2; i++)
    {
        cin>>c[i];
        sum3 += c[i];
    }
    cout<<sum1 - sum2 <<"\n";
    cout<<sum2 - sum3<<"\n";
    return 0;
}
