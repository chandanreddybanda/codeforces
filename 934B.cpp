#include<bits/stdc++.h>
#define ll long long int
#define PI 3.1415926535
using namespace std;
ll cnt=0;
set<char>se;
map<string ,ll >m;
ll gcd(ll x,ll y)
{
    if(x==0)
        return y;
    return gcd(y%x,x);
}
int main()
{
    ll k;
    cin>>k;
    if(k>36)
    {cout<<"-1";return 0;}
    if(k%2==0)
    {
        for(ll i=0;i<k/2;i++)
        cout<<"8";
    }
    else
    {
        k--;
        for(ll i=0;i<k/2;i++)
        cout<<"8";
        cout<<"6";
    }
}

