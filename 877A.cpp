#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
 #include<cstring>
#include<cstdlib>
#include<sstream>
#include<cmath>
#include<map>
#include<set>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main(){
	
	 ios_base::sync_with_stdio(0);
	 cin.tie(NULL);//no need if you want
   
  string s;
string name[5]={"Danil", "Olya", "Slava", "Ann", "Nikita"};//given
int i,j,k,l1,l2,c=0; //declare variable
   //codeforces 877A solution
   cin>>s;//input
   
   l1=s.length();
   for(i=0;i<5;i++)
   {
   	l2=name[i].length();
   	for(j=0;j<l1-l2+1;j++)
   	{
   		bool f=true;
   		for(k=0;k<l2;k++) if(s[j+k] != name[i][k]) f=false;
   		
   		if(f) c++;//count
	   }
   }
	
	if(c==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    
    return 0;
    
   
	 
     
}
