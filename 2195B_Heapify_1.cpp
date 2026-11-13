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
        for(ll i=0; i<18; i++)
        {
            for(ll j=0; 2*j + 1 < n; j++)
            {
                if(a[j] > a[2*j + 1])
                {
                    swap(a[j], a[2*j+1]);
                }
            }
        }
        if(is_sorted(a, a+n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
