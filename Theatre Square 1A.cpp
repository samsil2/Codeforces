#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    cout<<((m+a-1)/a)*((n+a-1)/a)<<endl;
    return 0;
}
