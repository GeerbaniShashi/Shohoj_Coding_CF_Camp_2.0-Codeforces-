#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    ll count = 0;
    if(m % n != 0) cout<<"-1"<<endl;
    else if(n == m) cout<<0<<endl;
    else
    {
        ll division = m/n;
        while(division % 2 == 0)
        {
            division/=2;
            count++;
        }
        while(division % 3 == 0)
        {
            division/=3;
            count++;
        }
        if(division == 1) cout<<count<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
