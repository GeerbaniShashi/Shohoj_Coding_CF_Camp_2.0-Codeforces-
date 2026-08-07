#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll pages;
    cin>>pages;
    ll a[7];
    for(ll i=0; i<7; i++)
    {
        cin>>a[i];
    }
    ll x = 0;
    ll count = 0;
    while(pages > 0)
    {
        count++;
        pages = pages - a[x%7];
        x++;
        if(pages <= 0) break;
    }
    if(count % 7 == 0) cout<<7<<endl;
    else cout<<count%7<<endl;
    return 0;
}
