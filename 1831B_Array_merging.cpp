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
        vector<ll>a(n), b(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<ll>maxA(2*n + 1, 0), maxB(2*n + 1, 0);
        ll count = 1;
        for(ll i=0; i<n; i++)
        {
            if(i > 0 && a[i] == a[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            maxA[a[i]] = max(maxA[a[i]], count);
        }
        count = 1;
        for(ll i=0; i<n; i++)
        {
            if(i > 0 && b[i] == b[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            maxB[b[i]] = max(maxB[b[i]], count);
        }
        ll maximum = INT_MIN;
        for(ll i=1; i<=2*n; i++)
        {
            maximum = max(maximum, maxA[i]+maxB[i]);
        }
        cout<<maximum<<"\n";
    }
    return 0;
}
