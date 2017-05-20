#include<iostream>
 
using namespace std;
int main()
{
    int n,i,j,a[1000],b[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
    {
    	 if(a[i]!=b[i]) {
    	 	cout<<"rated\n";
    	 	return 0;
		 }
    	  
	}
	
	for(i=1;i<n;i++)
    {
    	  if(a[i]>a[i-1]) {
    	  		cout <<"unrated"<<endl;
                 return 0;
		  }
	}
	cout<<"maybe"<<endl;
	
	
return 0;
}
