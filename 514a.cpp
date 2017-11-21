#include <iostream>

using namespace std;

int main()  {
    long long n;
    string smallNum;
    cin >> n;
    string nString = to_string(n);
    bool leadingZero = true;
    for (char a : to_string(n)) { 
        int checkNum = a - '0';
        if (checkNum > 4)   {
            checkNum = 9 - checkNum;
            if (checkNum == 0 && leadingZero == true)   {
                checkNum += 9; //invert it back
            }
        }
        leadingZero = false; // since after the first iteration you're now iterating on numbers that aren't leading 
        smallNum += to_string(checkNum);
    }
    cout << smallNum;
    return 0;
}
    
