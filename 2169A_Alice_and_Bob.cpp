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
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ll count1 = 0, count2 = 0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]>k) count2++;
            else if(a[i]<k) count1++;
        }
        if(count2 > count1) cout<<k+1<<"\n";
        else cout<<k-1<<"\n";
    }
    return 0;
}
