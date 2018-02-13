#include <iostream>

using namespace std;

int main()  {
    int n,m;
    cin >> n >> m;
    int myProd = 1,counter = 1;
    while (counter <= n && counter <= m)  {
        myProd *= counter;
        counter++;
    }
    cout << myProd;
    return 0;
}

