#include <iostream>

using namespace std;

int main()  {
    int n;
    cin >> n;
    int s = 0, t = 0;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        if (a > b)  {
            s++;
        } else if (a < b)   {
            t++;
        } else  { }
    }
    if (s > t)  {
        cout << "Mishka";
    } else if (s == t)  {
        cout << "Friendship is magic!^^";
    } else  {
        cout << "Chris";
    }
    return 0;
}

