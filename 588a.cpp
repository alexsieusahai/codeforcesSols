#include <iostream>

using namespace std;

int main()  {
    int m = 0,n;
    cin >> n;
    int a,p,minP=101;
    
    for (int i = 0; i < n; ++i) {
        cin >> a >> p;
        minP = min(p,minP);
        m+=a*minP;
    }
    cout << m;
    return 0;
}
