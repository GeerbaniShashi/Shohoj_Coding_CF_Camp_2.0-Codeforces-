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
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0] == -1 && a[n-1] == -1)
        {
            a[0] = 0;
            a[n-1] = 0;
        }
        else if(a[0] == -1)
        {
            a[0] = a[n-1];
        }
        else if(a[n-1] == -1)
        {
            a[n-1] = a[0];
        }
        for(ll i=0; i<n; i++)
        {
            if(a[i]==-1) a[i] = 0;
        }
        cout<<abs(a[n-1]-a[0])<<"\n";
        for(ll i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
