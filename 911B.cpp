#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int x=(a+b)/n;
	if(x<min(a,b))
	cout<<x<<endl;
	else
	cout<<min(a,b)<<endl;
}
