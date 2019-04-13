#include<bits/stdc++.h>
using namespace std;

int maxSubarrayXOR(int arr[], int n,int k)
{
	int ans=0;
    for(int i=n-1;i>=n-k;i--)
    ans=ans^arr[i];
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
	arr[i]=i+1;
    cout << "Max subarray XOR is " << maxSubarrayXOR(arr, n,k);
    return 0;
}
