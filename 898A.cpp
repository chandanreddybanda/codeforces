#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n%10==0)
	cout<<n<<endl;
	else
	{
		if(n%10>5)
		cout<<((n/10)*10)+10<<endl;
		else
		cout<<((n/10)*10)<<endl;
	}
}
