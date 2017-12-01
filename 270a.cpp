#include <iostream>

using namespace std;

int main()  {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        a = 180-a; //transform to exterior angle
        // use exterior angle theorem (sum of all exterior angles is 360 degrees)
        // so, n*a = 360, so 360%a would give us 0, since they're equally divisible
        if (360%a == 0) {
            cout << "YES\n";
        } else  {   
            cout << "NO\n";
        }
    }
    return 0;
}
