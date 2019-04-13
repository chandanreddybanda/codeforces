#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int c=0;
  for(int i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          return 0;
          break;
      }
      else
      c++;
  }
  if(c==(n/2)-2)
  return 1;
  else
  return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<check(9)<<check(3);
	/*for(int i=0;i<n;i++)
	{
		if(int(sqrt(a[i]))*int(sqrt(a[i]))==a[i] && a[i]!=1 &&check(int(sqrt(a[i]))))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}*/
}
