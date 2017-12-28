#include <iostream>
#include <string>

using namespace std;

int main()  {
    int costs[5];
    for (int i = 1; i < 5; ++i) {
        cin >> costs[i];
    }
    string inputString;
    int total = 0;
    cin >> inputString;
    for (char c : inputString)  {
        total += costs[int(c)-'0'];
    }
    cout << total;
    return 0;
}
        


    
