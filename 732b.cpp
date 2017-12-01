#include <iostream>

using namespace std;

int main()  {
    int n,k,t=0;
    cin >> n >> k; 
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        int before = a[i];
        if (before + a[i-1] >= k)    {
            continue;
        }
        //cout << before << endl;
        a[i] = k-a[i-1];
        //cout << a[i] << endl;
        t += a[i]-before;
        //cout << t << endl << endl;
    }
    cout << t << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}

