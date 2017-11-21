#include <iostream>

using namespace std;

int main()  {
    int n,c, words = 1;
    cin >> n >> c;
    int seconds[n];
    for (int i = 0; i < n; ++i) {
        cin >> seconds[i];
    }
    if (n == 1) { //edge case
        words = 1;
    }
    for (int i = 0; i < n-1; ++i) {
        int a = seconds[i];
        int b = seconds[i+1];
        if (b - a > c)  {
            words = 1;
        } else  {
            words += 1;
        }
    }
    cout << words;
    return 0;
}
