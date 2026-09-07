#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    string s1[m], s2[m];
    for(ll i=0; i<m; i++)
    {
        cin>>s1[i]>>s2[i];
    }
    string s[n];
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(s1[j] == s[i])
            {
                if(s1[j].length() <= s2[j].length())
                {
                    cout<<s1[j]<<" ";
                    break;
                }
                else
                {
                    cout<<s2[j]<<" ";
                }
            }
        }
    }
    cout<<endl;
    return 0;
}
