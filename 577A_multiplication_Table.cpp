#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, x;
    cin>>n>>x;
    ll count = 0;
    for(ll i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n) count++;
    }
    cout<<count<<endl;
    return 0;
}
