#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] == 1) count1++;
        else if(a[i] == 2) count2++;
        else if(a[i] == 3) count3++;
        else count4++;
    }
    ll taxi = 0;
    taxi += count4;
    taxi += count3;
    count1 = max(0LL, count1 - count3);
    taxi += (count2/2);
    if(count2 % 2 == 1)
    {
        taxi += 1;
        count1 = max(0LL, count1 - 2);
    }
    if(count1 > 0)
    {
        taxi += (count1 + 3) / 4;
    }
    cout<<taxi<<"\n";
    return 0;
}
