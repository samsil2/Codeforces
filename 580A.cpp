 #include<iostream>
 #include<algorithm>
 using namespace std;
 
 int main()
 {
 	int n,k=1,r=1;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++){
	 cin>>a[i];
	 if(i>0) if(a[i]>=a[i-1]){
 		k++;
 		r=max(r,k);
	 }
	 else k=1;
	 }
 	
	 
	 cout<<r<<endl;
 }
