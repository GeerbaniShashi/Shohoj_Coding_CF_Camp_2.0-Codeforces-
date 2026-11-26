#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll binary(string str)
{
    ll sum = 0;
    ll n = str.length();
    for(ll i=0; i<n; i++)
    {
        sum += ((str[i]-'0')*(pow(2, n-i-1)));
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    ll n = s.length();
    ll value = pow(2,n) - 2;

    string str = "";
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='4') str += '0';
        else str += '1';
    }

    ll index = value + binary(str) + 1;
    cout<<index<<"\n";

    return 0;
}
