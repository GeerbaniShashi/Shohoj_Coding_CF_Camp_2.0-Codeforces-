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
        ll n;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        if(ch == 'g')
        {
            cout<<"0\n";
        }
        else
        {
            string str = "";
            str += s;
            str += s;
            ll maximum = INT_MIN, last_index = -1;
            for(ll i=2*n-1; i>=0; i--)
            {
                if(str[i]=='g')
                {
                    last_index = i;
                }
                if(i < n && str[i] == ch && last_index != -1)
                {
                    maximum = max(maximum, last_index - i);
                }
            }
            cout<<maximum<<"\n";
        }
    }
    return 0;
}
