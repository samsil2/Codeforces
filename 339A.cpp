#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	string  s;
	int i;
	while(getline(cin,s))
	{
		vector<char>c;
		for(i=0;i<s.length();i+=2)
		{
			c.push_back(s[i]);
		}
		sort(c.begin(),c.begin()+c.size());
		for(i=0;i<c.size()-1;i++)
		{
			cout<<c[i]<<"+";
		}
		cout<<c[i]<<endl;
	}
}
