#include <iostream>

using namespace std;

int main(){

    const int MAX = 5;
    const int MEM = 3;
    int n, k; 
	cin>>n>>k;
    int allowed = MAX - k;

    int c=0;
    for(int p = 0; p < n; p++){
        int temp; 
		cin>>temp;
        c  += (temp <= allowed);
    }

   cout<<c/MEM<<endl;

    return 0;
}
