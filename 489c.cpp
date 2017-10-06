#include <iostream>
#include <string>

using namespace std;
// problem! exceeds memory limit because of memotable
// what to do?

// memo table initalized here
int memo[1000][100][900];
int bigNum = -1;
int smallNum = 1000000000;

int dp(int m, int s, string numSoFar)  { //m is length, s is sum of digits
    // find the biggest one first
    if (s == 0) {
        if (m == 0) {
            return stoi(numSoFar);
        } else  {
            return -1; //bad
        }
    } else  {
        if (m == 0) {
            return -1; //bad
        }
    }
    int results[10]; 
    // base cases taken care of, now implement recursive algorithm
    for (int i = 0; i <= 9; ++i)    {
        if (memo[stoi(numSoFar)][m-1][s-i] != 0) {
            results[i] = memo[stoi(numSoFar)][m-1][s-i];
        } else  {
        results[i] = dp(m-1, s-i, numSoFar+to_string(i));
        memo[stoi(numSoFar)][m-1][s-i] = results[i];
        if (results[i] > bigNum)    {
            bigNum = results[i];
        }
        if (results[i] < smallNum && results[i] != -1)  {
            smallNum = results[i];
        }
        }
    }
}



int main()  {
    int m,s;
    cin >> m >> s;
    // checking memo values
    string baseString = "0";
    dp(m,s,baseString);
    if (smallNum == 1000000000) {
        smallNum = -1;
    }
    cout << bigNum << ' ' << smallNum;
    return 0;
}
