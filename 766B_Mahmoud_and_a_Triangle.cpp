#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    bool ok = false;
    for(ll i=0; i<n-2; i++)
    {
        if(a[i]+a[i+1] > a[i+2])
        {
            ok = true;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
