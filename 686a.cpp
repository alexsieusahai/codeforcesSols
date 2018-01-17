#include <iostream>

using namespace std;

int main()  {
    long long int n,x,distress = 0;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        char pm; long long int c;
        cin >> pm >> c;
        if (pm == '+')  {
            x += c;
        } else  {
            if (x >= c)  {
                x -= c;
            } else  {
                distress++;
            }
        }
    }
    cout << x << ' ' << distress;
    return 0;
}
