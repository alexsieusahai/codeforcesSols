#include <iostream>

using namespace std;

int main()  {
    int n,a=1,check;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> check;
        if (check == a) {
            cout << -1;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
