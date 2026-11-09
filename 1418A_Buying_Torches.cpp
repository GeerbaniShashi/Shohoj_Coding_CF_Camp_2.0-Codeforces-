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
        ll x, y, k;
        cin>>x>>y>>k;
        ll total = (y*k) + k;
        total = total - 1;
        x = x - 1;
        ll value = total / x;
        if(total % x != 0) value++;
        cout<<value+k<<"\n";
    }
    return 0;
}
