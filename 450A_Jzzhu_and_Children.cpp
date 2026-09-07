#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%k==0) b[i] = (a[i]/k);
        else b[i] = (a[i]/k)+1;
    }
    ll maximum = 0, index = 0;
    for(ll i=0; i<n; i++)
    {
        if(b[i]>=maximum)
        {
            maximum = b[i];
            index = i+1;
        }
    }
    cout<<index<<endl;
    return 0;
}
