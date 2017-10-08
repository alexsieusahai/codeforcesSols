// greedy solution to 489c
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()  {
    int m,s;
    cin >> m >> s; // m is length, s is sum of digits
    vector<int> digits;
    if (s < 0 || s > m*9 )   {
        cout << "-1 -1";
        return 0;
    }
    if (m == 1 && s == 0)   {
        cout << "0 0";
        return 0;
    }
    if (m > 0 && s == 0)    {
        cout << "-1 -1";
        return 0;
    }
    // find all the digits of the number
    while (m > 0)   {
        int i = 9;
        while (i > s)  {
            i--;
        }
        s -= i;
        m--;
        digits.push_back(i);
    }
    sort(digits.begin(), digits.end(),greater<int>());
    string bigNum = "";
    for (int i = 0; i < digits.size(); ++i)   {
        bigNum += to_string(digits[i]);
    }
    string smallNum = "";
    int zeroesToAppend = 0;
    bool seenNonZeroes = false;
    for (int i = digits.size()-1; i >= 0; --i)  {
        if (seenNonZeroes == false && digits[i] == 0)    {
            zeroesToAppend++;
        } else  {
            smallNum += to_string(digits[i]);
            seenNonZeroes = true;
        }
    }
    for (int i = 0; i < zeroesToAppend; ++i)    {
        smallNum.insert(1,"0");
    }
    cout << smallNum << ' ' << bigNum;
    return 0;
}



