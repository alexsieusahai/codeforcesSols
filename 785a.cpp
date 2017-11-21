#include <iostream>
#include <string>

using namespace std;

int main()  {
    int total=0,n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp == "Tetrahedron")  {
            total += 4;
        } else if (temp == "Cube")  {
            total += 6;
        } else if (temp == "Octahedron")    {
            total += 8;
        } else if (temp == "Dodecahedron")  {
            total += 12;
        } else  {
            total += 20;
        }
    }
    cout << total;
    return 0;
}
