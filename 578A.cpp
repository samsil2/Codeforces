#include <cstdio>
#include<cmath>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

 int main()
 {
 	 int n,i,s=0,b=0,m;
 	 cin>>n;
 	 int a[n];
 	 for(i=0;i<n;i++)
 	 {
 	 	cin>>a[i];
	  }
	  sort(a,a+n);
	  m=a[n-1];
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]<m)
	  	{
	  		b=m-a[i];
	  		s+=b;
		  }
	  }
	  cout<<s<<endl;
	  
	  return 0;


 }
