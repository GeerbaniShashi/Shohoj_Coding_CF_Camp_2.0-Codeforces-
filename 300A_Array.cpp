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
    vector<ll>positive, negative, zero;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0) positive.push_back(a[i]);
        else if(a[i]<0) negative.push_back(a[i]);
        else zero.push_back(a[i]);
    }

    if(negative.size() % 2 == 0)
    {
        zero.push_back(negative.back());
        negative.pop_back();
    }

    if(positive.size() == 0)
    {
        positive.push_back(negative.back());
        negative.pop_back();

        positive.push_back(negative.back());
        negative.pop_back();
    }

    cout<<negative.size()<<" ";
    for(ll i=0; i<negative.size(); i++)
    {
        cout<<negative[i]<<" ";
    }
    cout<<"\n";

    cout<<positive.size()<<" ";
    for(ll i=0; i<positive.size(); i++)
    {
        cout<<positive[i]<<" ";
    }
    cout<<"\n";

    cout<<zero.size()<<" ";
    for(ll i=0; i<zero.size(); i++)
    {
        cout<<zero[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
