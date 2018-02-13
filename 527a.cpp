#include <iostream>
#include <cmath>

using namespace std;

long long int maxSols(long long int a, long long int b, long long int cuts) {
    if (a == 0 || b == 0)   {
        return cuts;
    }
    if (a < b)  {
        long long int temp = a;
        a = b;
        b = temp;
    }
    cuts += floor(double(a) / double(b));
    a = a%b;
    return maxSols(a,b, cuts);
}

int main()  {
    long long int a,b,cuts = 0;
    cin >> a >> b;
    cout << maxSols(a,b,cuts);
    return 0;
}
