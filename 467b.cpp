#include <iostream>

using namespace std;

int main()  {
    int n,m,k,friends = 0;
    cin >> n >> m >> k;
    uint32_t armies[m];
    for (int i = 0; i < m; ++i)    {
        cin >> armies[i];
    }
    uint32_t fedorArmy;
    cin >> fedorArmy;
    for (int i = 0; i < m; ++i) {
        int myDiff = fedorArmy^armies[i];
        int myPower = 1;
        int diffBits = 0;
        // try all bits of myDiff
        int checkDiff = 0;
        for (int j = 0; j < 32; ++j)    {
            int check = myDiff;
            check = ((check << 31-j) >> 31)&1;
            checkDiff += check;
        }
        if (checkDiff <= k) {
            friends++;
        }
    }
    cout << friends;
    return 0;
}

