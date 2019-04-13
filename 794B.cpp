#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double n,h;
	cin>>n>>h;
	for(double i=1;i<n;i++)
	{
		cout<<setprecision(13)<<h/sqrt(n/i)<<" ";
	}
}
