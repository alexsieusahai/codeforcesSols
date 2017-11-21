#include <iostream>
#include <string>

using namespace std;

int main()  {
    string input;
    cin >> input;
    int minTurns = 0;
    int ptr = 0;
    for (auto c : input)    {
        // turn the minimum amount
        int pos = int(c)-int('a');
        //cout << abs(pos-ptr) << endl;
        minTurns += min(abs(26-abs(pos-ptr)),abs(pos-ptr));
        ptr = c-'a';
    }
    cout << minTurns;
    return 0;
}
