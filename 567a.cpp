#include <iostream>

using namespace std;
typedef long long ll;

int main()  {
    int n;
    cin >> n;
    ll cities[n];
    for (int i = 0; i < n; ++i)    {
        cin >> cities[i];
    }
    cout << cities[1]-cities[0] << ' ' << cities[n-1]-cities[0] << '\n';
    for (int i = 1; i < n-1; ++i) {
        cout << min(abs(cities[i]-cities[i-1]), abs(cities[i]-cities[i+1]))
            << ' ' << max(cities[i]-cities[0], cities[n-1]-cities[i]) << '\n';
    }
    cout << cities[n-1]-cities[n-2] << ' ' << cities[n-1]-cities[0];
    return 0;
}

