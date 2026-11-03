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
        if(n < 6) cout<<15<<"\n";
        else if(n % 2 == 0) cout<<(n*5)/2<<"\n";
        else cout<<((n+1)*5)/2<<"\n";
    }
    return 0;
}
