#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    ll n = s.length();
    ll position = -1;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            position = i;
            break;
        }
    }
    if(position != -1)
    {
        for(ll i=0; i<n; i++)
        {
            if(position != i) cout<<s[i];
            else continue;
        }
        cout<<"\n";
    }
    else
    {
        for(ll i=0; i<n-1; i++)
        {
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
