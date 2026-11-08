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
        ll a1, a2, b1, b2;
        cin>>a1>>a2>>b1>>b2;
        ll suneet = 0, slavic = 0;
        ll count = 0;
        if(a1 > b1) suneet++;
        else if(a1 < b1) slavic++;
        if(a2 > b2) suneet++;
        else if(a2 < b2) slavic++;
        if(suneet > slavic) count++;
        suneet = 0;
        slavic = 0;
        if(a1 > b2) suneet++;
        else if(a1 < b2) slavic++;
        if(a2 > b1) suneet++;
        else if(a2 < b1) slavic++;
        if(suneet > slavic) count++;
        suneet = 0;
        slavic = 0;
        if(a2 > b1) suneet++;
        else if(a2 < b1) slavic++;
        if(a1 > b2) suneet++;
        else if(a1 < b2) slavic++;
        if(suneet > slavic) count++;
        suneet = 0;
        slavic = 0;
        if(a2 > b2) suneet++;
        else if(a2 < b2) slavic++;
        if(a1 > b1) suneet++;
        else if(a1 < b1) slavic++;
        if(suneet > slavic) count++;
        suneet = 0;
        slavic = 0;
        cout<<count<<endl;
    }
    return 0;
}
