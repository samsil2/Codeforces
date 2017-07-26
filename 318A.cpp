 #include<iostream>
 #include<iomanip>
 #include<cmath>
 #include<algorithm>
 #include<vector>
 
 using namespace std;
 


int main()
{
  long long k ,n ,rem;
 
cin >>n>>k;
 

if(k<=(n+1)/2)
{
      cout<<k*2-1<<endl;
}

else 
{
      cout<<(k-(n+1)/2)*2<<endl;
}
   
}
