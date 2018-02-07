#include <iostream>

using namespace std;

int sumDigits(int s) {
    int sum = 0;
    while (s)   {
        sum += s % 10;
        s /= 10;
    }
    return sum;
}

int main()  {
    int k,i=0;
    cin >> k;
    while (k)   {
       if (sumDigits(i) == 10) k--;
       i++;
    }
    cout << i-1;
    return 0;
}

