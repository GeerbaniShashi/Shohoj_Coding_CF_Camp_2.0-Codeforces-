#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        if(a < c) cout<<1<<" ";
        else cout<<"-1 ";
        if(c < a*b) cout<<b<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
