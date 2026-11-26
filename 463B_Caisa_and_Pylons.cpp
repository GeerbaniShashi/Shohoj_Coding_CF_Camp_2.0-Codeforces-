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
    ll a[n];
    ll maximum = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        maximum = max(maximum, a[i]);
    }
    cout<<maximum<<"\n";

    return 0;
}
