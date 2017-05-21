#include<iostream>
#include<string.h>
#include<set>
#include<cstdlib>
 
using namespace std;
int main()
{
	 ios::sync_with_stdio(false);
 char str[1000];
 while(gets(str))
 {
 	bool f[30]={0};
 	int l=strlen(str);
 	for(int i=0;i<l;i++)
 	{
 		if (islower(str[i]))  
                f [str[i]-'a'] = 1;
	 }
	 int r=0;
	 for(int i=0;i<26;i++)
	 {
	 	if(f[i]) r++;
	 }
	 cout<<r<<endl;
 }
return 0;
}
