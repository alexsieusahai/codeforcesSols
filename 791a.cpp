#include <iostream>
#include <cmath>
using namespace std;

int main()  {
    float a,b;
    int n = 0;
    cin >> a >> b;
    while (a <= b)  {
        a *= 3;
        b *= 2;
        n++;
    }
    cout << n;
    return 0;
}
