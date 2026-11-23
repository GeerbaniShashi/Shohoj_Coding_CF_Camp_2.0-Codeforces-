#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll sumOfDigit(ll n)
{
    ll sum = 0, temp = n;
    while(temp != 0)
    {
        ll rem = temp % 10;
        sum += rem;
        temp /= 10;
    }
    return sum;
}

int main()
{
    ll n;
    cin>>n;
    ll num = 19;
    ll count = 0;
    while(1)
    {
        if(sumOfDigit(num) == 10)
        {
            count++;
            if(count == n)
            {
                cout<<num<<"\n";
                break;
            }
        }
        num += 9;
    }
    return 0;
}
