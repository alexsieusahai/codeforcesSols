#include <iostream>

using namespace std;

int main()  {
    int n,a,b;
    cin >> n >> a >> b; 
    // bounds are so tiny that I can just do it the stupid way
    if (b == 0) {
        cout << a;
        return 0;
    }
    int w = b/(abs(b));
    b = abs(b);
    while (b > 0)   {
        b -= 1;
        a += w;
        if (a > n)  {
            a = 1;
        }
        if (a == 0) {
            a = n;
        }
    }
    cout << a;

}
