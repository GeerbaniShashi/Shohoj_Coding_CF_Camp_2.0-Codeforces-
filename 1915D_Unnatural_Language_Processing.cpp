#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isvowel(char ch)
{
    if(ch == 'a' || ch == 'e') return true;
    else return false;
}

bool isconsonant(char ch)
{
    if(ch == 'b' || ch == 'c' || ch == 'd') return true;
    else return false;
}

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
        cin>>n;
        string s;
        cin>>s;
        string str = "";
        for(ll i=n-1; i>=0; i--)
        {
            if(isconsonant(s[i]) && isvowel(s[i-1]) && isconsonant(s[i-2]))
            {
                str += s[i];
                str += s[i-1];
                str += s[i-2];
                i-=2;
            }
            else if(isvowel(s[i]) && isconsonant(s[i-1]))
            {
                str += s[i];
                str += s[i-1];
                i--;
            }

            if(i != 0) str += '.';
        }
        reverse(str.begin(), str.end());
        cout<<str<<"\n";
    }

    return 0;
}
