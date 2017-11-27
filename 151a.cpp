#include <iostream>

using namespace std;

int main()  {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // get milliliters
    int numLiquid = k*l/nl;
    int numLimes = c*d;
    int numSalt = p/np;
    cout << min(numLiquid,min(numLimes,numSalt))/n;
    return 0;
}
