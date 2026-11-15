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
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<n; i++)
    {
        ll minimum, maximum;
        if(i == 0) minimum = abs(a[i]-a[i+1]);
        else if(i == n-1) minimum = abs(a[i]-a[i-1]);
        else minimum = min(abs(a[i]-a[i+1]), abs(a[i]-a[i-1]));

        maximum = max(abs(a[i]-a[0]), abs(a[i]-a[n-1]));

        cout<<minimum<<" "<<maximum<<"\n";
    }
    return 0;
}
