#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k = (n-1)/2;
        ll moves = (8 * (k*(k+1)*((2*k)+1)))/6;
        cout<<moves<<endl;
    }
    return 0;
}
