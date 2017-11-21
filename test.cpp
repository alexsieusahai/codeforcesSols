#include <iostream>
#include <vector>

using namespace std;

int main()  {
    int ans = 8;
    ans = ((ans << 28) >> 31)&1;
    cout << ans;
    return 0;
}
