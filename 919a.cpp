#include <iostream>

using namespace std;

int main()  {
    int n,m;
    double smallNum = -1;
    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        double t,v;
        cin >> t >> v;
        smallNum = min(smallNum, m*(t/v));
        if (smallNum == -1) smallNum = m*(t/v);
    }
    cout << smallNum;
    return 0;
}
