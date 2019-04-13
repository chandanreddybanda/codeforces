#include<bits/stdc++.h>
#include<signal.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back

int main(){
	ld n;
	cin>>n;
	ld x = floor(sqrt(n)),y;
	y = x;
	if(x*y==n){
		cout<<x+y<<endl;
	}
	else if(n>x*y&&n<=x*(y+1)){
		cout<<x+y+1<<endl;
	}
	else{
		cout<<x+y+2<<endl;
	}
}
