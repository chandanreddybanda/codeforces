#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,y,z,p=0,q=0;
    cin>>a>>b>>x>>y>>z;
    if(2*x+y-a>=0)
    p=2*x+y-a;
    if(3*z+y-b>=0)
    q=3*z+y-b;
    cout<<p+q;
}
