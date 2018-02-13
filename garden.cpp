#include <iostream>

using namespace std;

int main()  {
    int n,k;
    int check, smallNum = 1000;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> check;
        if (!(k % check))   {
            if (k / check < smallNum)   {
                smallNum = k/check;
            }
        }
    }
    cout << smallNum;
    return 0;
}
