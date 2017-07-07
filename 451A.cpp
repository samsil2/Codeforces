#include<iostream>
#include<algorithm>
using namespace std;

 
int main()
{
	int n,m;
	cin>>n>>m;
	
	if(n>m){
	     n=n^m;
	     m=n^m;
	     n=n^m;
	}
	if(n%2==1) cout<<"Akshat"<<endl;
	else cout<<"Malvika"<<endl;
}
