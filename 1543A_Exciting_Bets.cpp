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
        ll a, b;
        cin>>a>>b;
        ll x = abs(a-b);
        ll y = min(a,b);
        ll gcd;
        if(a != b) gcd = min(y%x,x-(y%x));
        if(a==b) cout<<"0 0\n";
        else if(x == 1) cout<<"1 0\n";
        else cout<<x<<" "<<gcd<<"\n";
    }
    return 0;
}
