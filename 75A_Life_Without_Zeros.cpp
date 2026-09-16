#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll removeZero(ll n)
{
    ll temp = n, sum = 0, multiplier = 1;
    while(temp != 0)
    {
        ll rem = temp % 10;
        if(rem != 0)
        {
            sum = sum + rem * multiplier;
            multiplier *= 10;
        }
        temp = temp/10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin>>a>>b;
    ll c = a + b;
    ll c_new = removeZero(c);
    ll a_new = removeZero(a);
    ll b_new = removeZero(b);
    ll x = a_new + b_new;
    // cout<<x<<" "<<c<<" "<<c_new<<endl;
    if(x == c_new) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
