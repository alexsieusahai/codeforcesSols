#include <iostream>

using namespace std;

int main()  {
    // okay, so he has to move in some arbitrary direction every single step
    // I want to prove that drasil can reach there in exactly the steps required so I'll assume that he moves towards the house then kind of meanders around it? need paper
    long long a,b,s;
    cin >> a >> b >> s;
    s -= abs(a) + abs(b);
    if ((s % 2) != 0 || s < 0)   {
        cout << "No";
    } else  {
        cout << "Yes";
    }
    return 0;
}
