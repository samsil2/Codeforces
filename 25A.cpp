#include<iostream>
#include<cstdio>
using namespace std;
int a[100];

int main()
{
    int i, n;
    int c1, c2, odd, even;
    while(cin>>n && n!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        c1=0, c2=0;
        for(i=1; i<=n; i++)
        {

            if(a[i]%2==0)
            {
                c1 +=1;
                even = i;
                continue;
            }
            if(a[i]%2!=0)
            {
                c2+=1;
                odd=i;
            }
        }
        if(c1>c2)
        {
            cout<<odd<<endl;
        }
        else
        {
            cout<<even<<endl;
        }
    }
}
