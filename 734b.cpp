#include <iostream>

using namespace std;

int main()  {
// take all 2,5,6 and make 256 out of them
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int max256 = min(min(k2,k5),k6);
    k2 -= max256;
    max256 *= 256;
    cout << max256 + 32*min(k2,k3);
    return 0;
}
