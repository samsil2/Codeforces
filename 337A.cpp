#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int a,b,ans,ar[1000],i;
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		cin>>ar[i];
		
	}
	sort(ar,ar+b);
	ans=ar[a-1]-ar[0];
	for(i=1;i<=b-a;i++)
	{
		if(ar[i+a-1]-ar[i]<ans)
		{
			ans=ar[i+a-1]-ar[i];
		}
	}
    cout<<ans<<endl;
}
