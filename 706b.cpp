#include <iostream>
#include <algorithm>

using namespace std;

int main()  {
    int n,q;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    } 
    sort(x,x+n); // lowest to highest
    int stream;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> stream;
        int j = 0,numDrinks = 0;
        // binary search over the algo
    }
    return 0;
}
    
