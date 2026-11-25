#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l, r;
    cin>>l>>r;
    if(l % 2 != 0) l++;

    if(l + 2 <= r) cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
    else cout<<"-1\n";

    return 0;
}
