#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>

using namespace std;

int main()  {
    string s;
    cin >> s;
    unordered_map<int,int> a;
    for (char c : s)    a[c-'0'] += 1;
    int b, c = 0;
    cin >> b;
    int t = log10(b);

    return 0;
}
