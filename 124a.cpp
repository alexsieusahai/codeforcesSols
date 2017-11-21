#include <iostream>

using namespace std;

int main()  {
    // try the naive algo
    // since the bounds are so low naive solution will work
    int n,a,b,w=0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i) {
        int numBehind = n-i;
        int numInFront = i-1;
        if (numBehind <= b && numInFront >= a)    {
            w++;
        }
    }
    cout << w;
    return 0;
}
