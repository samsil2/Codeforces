#include <iostream>
#include<cstring>

using namespace std;
int main()
{
    string queue[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
 
    cin >> n;
 
    while(n>5)
        n =(n/2)-2;
 
    cout << queue[n-1] << endl;
 
    return 0;
}
