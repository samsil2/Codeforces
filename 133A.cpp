#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	int len=0;
	cin>>s;
	len=s.length();
	for(int i= 0;i<len;i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			cout<<"YES\n";
			return 0;
		}
		
	}
	cout<<"NO\n";
}
