#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()  {
    string s,s0;
    cin >> s;
    s0 = s;
    reverse(s0.begin(),s0.end());
    cout << s+s0;
    return 0;
}
    
