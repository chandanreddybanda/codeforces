#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
    ll n,m;
    cin>>n>>m;
    n=(1LL<<n);
    m=m&(n-1);
    cout<<m<<endl;
}
