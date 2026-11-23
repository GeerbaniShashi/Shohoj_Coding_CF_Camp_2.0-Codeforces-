#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, b, c;
    cin>>a>>b>>c;
    ll ans = a*b*c;
    ll square_root = sqrt(ans);
    ll x = square_root/a;
    ll y = square_root/b;
    ll z = square_root/c;
    cout<<4*(x+y+z)<<"\n";
    return 0;
}
