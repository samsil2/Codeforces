#include <iostream>

using namespace std;

int main() {  
    int n, temp, numG = 0;
    int size [5];
    for (int i = 0; i < 5; i++) size[i] = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        size [temp]++;
    }
    numG += size[4] + size[3];
    int x;
    if (size [1] > size[3]) {
        size[1] -= size[3];
    } else {
        size[1] = 0;
    }
    int y = size [2] / 2;
    size [2] -= y * 2;
    numG += y;
    numG  += size[2];
    if (size[1] * 2 >= size[2]) {
        size[1] -= size[2] * 2;
        size[2] = 0;
    }
    numG += size[1] / 4;
    size [1] = size[1] % 4;
    if (size[1] > 0) {
        numG++;
    }
    cout << numG << endl;
    return 0;
}
 
