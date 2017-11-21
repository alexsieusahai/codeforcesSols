#include <iostream>
#include <vector>

using namespace std;

int main()  {
    int n,a = 0;
    cin >> n;
    while (n > 3)   {
        n -= 2;
        a++;
    }
    cout << a + 1 << '\n';
    for (int i = 0; i < a; ++i) {
        cout << 2 << ' ';
    }
    if (n == 3)  {
        cout << 3 << ' '; //if the number is odd
    } else  {
        cout << 2 << ' '; // if the number is even
    }
        
    return 0;
}
