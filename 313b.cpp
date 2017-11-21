#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()  {
    int points[100000] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)   {
        if (s[i] == s[i+1]) {
            points[i] = 1;
        } else  {
            points[i] = 0;
        }
        cout << i << ' ' << points[i] << '\n';
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l,r;
        cin >> l >> r;
        l -= 1;
        r -= 1;
        int mySum = 0;
        for (int j = l; j <= r; ++j) {
            mySum += points[j];
        }
        cout << mySum << '\n';
    }
    return 0;
}
