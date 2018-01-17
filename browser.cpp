#include <iostream>

using namespace std;

int main()  {
    int n,pos,l,r,a=0;
    cin >> n >> pos >> l >> r;
    bool goLeft = true, goRight = true;
    // check for special cases first
    if (n == r && 1 == l)   { // don't have to do anything
        cout << '0';
        return 0;
    }
    if (n == r)   { // don't have to go right
        cout << abs(pos-l)+1;
        return 0;
    }
    if (l == 1) {
        // don't have to go left
        cout << abs(pos-r)+1;
        return 0;
    }
    cout << min(abs(pos-r),abs(pos-l))+(r-l)+2;
    return 0;
}
