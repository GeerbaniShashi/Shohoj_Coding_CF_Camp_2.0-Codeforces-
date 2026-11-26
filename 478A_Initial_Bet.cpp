#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll c1, c2, c3, c4, c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    ll answer = (c1 + c2 + c3 + c4 + c5);
    if(answer % 5 == 0 && answer != 0) cout<<(answer/5)<<"\n";
    else cout<<"-1\n";

    return 0;
}
