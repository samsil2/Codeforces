#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,pi,a[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>pi;
		
		a[pi]=i;
	}
		for(i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
