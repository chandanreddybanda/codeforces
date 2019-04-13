#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define pie 3.1415926
int main(){
    ld n,r;
    cin>>n>>r;
    ld x = sin(pie/n);
    ld y = x / (1-x);cout<<fixed<<setprecision(8)<<y*r<<endl;
}
