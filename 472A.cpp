 #include<iostream>
 #include<iomanip>
 #include<cmath>
 #include<algorithm>
 
 using namespace std;
 


int main()
{
  int n;
  while(cin>>n)
  {
  	if(n%2==0) cout<<8<<" "<<n-8<<endl;
  	else cout<<9<<" "<<n-9<<endl;
  }
  return 0;
}
